/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:18:26 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 14:52:37 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*new_string(char *dst, const char *src)
{
	while (*src)
		*dst++ = *src++;
	return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total_lenght;
	size_t	count;
	char	*new_dst;

	new_dst = dst;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	total_lenght = ft_strlen(src) + ft_strlen(dst);
	count = dstsize - ft_strlen(dst) - 1;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (*new_dst)
		new_dst++;
	if (dstsize >= ft_strlen(src) + ft_strlen(dst) + 1)
		new_dst = new_string(new_dst, src);
	else
	{
		while (count--)
			*new_dst++ = *src++;
	}
	*new_dst = '\0';
	return (total_lenght);
}
