/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:00:44 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 15:34:52 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	int		x;
	int		y;

	if (!lst)
		return (NULL);
	temp = lst;
	y = 1;
	x = ft_lstsize(lst);
	while (y < x)
	{
		temp = temp->next;
		y++;
	}
	return (temp);
}
