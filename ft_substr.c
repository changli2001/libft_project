/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:30:30 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/21 01:20:27 by ochangli         ###   ########.fr       */
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

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*new;
	size_t	j;

	new = NULL;
	j = 0;
	if (!s)
		return (NULL);
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	if ((start > ft_strlen(s)) || (len == 0))
		return (allocate_empty_string());
	new = (char *) malloc (len + 1);
	if (!new)
		return (NULL);
	else if (start < ft_strlen(s))
	{
		while (j < len)
			new[j++] = s[start++];
		new[j] = '\0';
	}
	return (new);
}
