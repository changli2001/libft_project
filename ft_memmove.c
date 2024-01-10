/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:15:07 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 14:35:43 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*new_src;
	char		*new_dst;
	char		*last_dest;
	const char	*last_src;

	new_dst = (char *)dst;
	new_src = (char *)src;
	if (new_dst > new_src && new_src + len > new_dst)
	{
		last_dest = new_dst + (len - 1);
		last_src = new_src + (len - 1);
		while (len)
		{
			*(last_dest--) = *(last_src--);
			len--;
		}
	}
	else
		ft_memcpy (new_dst, new_src, len);
	return ((void *)dst);
}
