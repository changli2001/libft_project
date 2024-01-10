/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:39:45 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 15:42:08 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *c)
{
	if (*c == '\n' || *c == '\v'
		|| *c == '\f' || *c == '\r'
		|| *c == '\t' | *c == ' ')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_atoi(const char *c)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	while (ft_isspace(c) == 1)
		c++;
	if (*c == '+' || *c == '-')
	{
		if (*c == '-')
			sign *= -1;
		c++;
	}
	while (*c >= '0' && *c <= '9')
	{
		result = result * 10 + (*c - '0');
		c++;
	}
	return (result * sign);
}
