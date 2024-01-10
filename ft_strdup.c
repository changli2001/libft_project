/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:24:33 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 15:10:53 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*duplicated;
	size_t	i;
	size_t	f;

	f = 0;
	i = ft_strlen (s1) + 1;
	duplicated = malloc(i);
	if (duplicated != NULL)
	{
		while (f < i)
		{
			*(duplicated++) = *(s1++);
			f++;
		}
		return (duplicated - i);
	}
	return (NULL);
}
