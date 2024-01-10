/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:44:35 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 15:00:54 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t dstsize)
{
	size_t	lenght_src;

	lenght_src = ft_strlen(src);
	if (dstsize <= 0)
		return (lenght_src);
	if (dstsize > lenght_src + 1)
		while (*src)
			*dst++ = *src++;
	else if (dstsize <= lenght_src + 1)
	{
		while (dstsize - 1)
		{
			*dst++ = *src++;
			dstsize--;
		}
	}
	*dst = '\0';
	return (lenght_src);
}
