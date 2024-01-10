/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:48:42 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/27 22:43:45 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_empty_string(void)
{
	char	*empty_string;

	empty_string = malloc(1);
	if (!empty_string)
		return (NULL);
	empty_string[0] = '\0';
	return (empty_string);
}

static int	check_match(char const *big, char const *little)
{
	while (*big)
	{
		if (*little == *big)
			return (1);
		big++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*p_start;
	const char	*p_end;
	size_t		lenght;
	char		*new;

	if (!s1 || !set)
		return (NULL);
	p_start = s1;
	p_end = p_start + ft_strlen(s1) - 1;
	while (check_match(set, p_start) == 1)
		p_start++;
	if (*p_start == '\0')
		return (allocate_empty_string());
	while (check_match(set, p_end) == 1 && p_end >= s1)
		--p_end;
	lenght = (p_end - p_start) + 1;
	new = malloc(lenght + 1);
	if (!new)
		return (NULL);
	while (p_start <= p_end)
		*new++ = *p_start++;
	*new = '\0';
	return (new - lenght);
}
