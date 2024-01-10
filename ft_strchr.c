/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:55:33 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 14:37:52 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		i--;
		s++;
	}
	return (NULL);
}
