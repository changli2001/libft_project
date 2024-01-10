/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:24:15 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/27 23:43:46 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	if (!lst || !*f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new = ft_lstnew(new);
		if (!new)
		{
			ft_lstclear(&head, del);
			free(new);
			return (NULL);
		}
		new->content = f(lst->content);
		ft_lstadd_back(&head, new);
		new->next = NULL;
		lst = lst->next;
	}
	return (head);
}
