/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:26:43 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 15:14:07 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (2);
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int i)
{
	char	*new;
	int		lenght;
	long	nb;

	nb = i;
	lenght = len(nb);
	new = malloc (lenght);
	if (!new)
		return (NULL);
	new[lenght - 01] = '\0';
	if (nb < 0)
	{
		new[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		new[0] = '0';
	while (nb != 0)
	{
		new[lenght - 2] = ((nb % 10) + '0');
		lenght--;
		nb = nb / 10;
	}
	return (new);
}
