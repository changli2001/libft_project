/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:56:03 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/26 18:56:06 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*next;

	count = 0;
	next = lst;
	if (!lst)
		return (0);
	while (next != NULL)
	{
		count++;
		next = next->next;
	}
	return (count);
}
