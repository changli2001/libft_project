/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:39:17 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/31 19:31:57 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*new_src;
	char	*new_dst;

	new_src = (char *)src;
	new_dst = (char *)dst;
	if (src == dst)
		return ((void *)dst);
	while (n)
	{
		*(new_dst++) = *(new_src++);
		n--;
	}
	return ((void *)dst);
}
