/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:53:50 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 15:11:19 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	i;

	p = NULL;
	i = ft_strlen(s) + 1;
	while (i)
	{
		if (*s == (unsigned char)c)
		{
			p = (char *)s;
		}
		i--;
		s++;
	}
	return (p);
}
