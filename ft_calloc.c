/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:22:57 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 13:55:30 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = count * size;
	if (i != 0 && (i / count) != size)
		return (NULL);
	p = malloc(i);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, i);
	return ((void *)p);
}
