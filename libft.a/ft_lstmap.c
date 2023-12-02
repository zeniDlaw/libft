/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 06:23:18 by ichettri          #+#    #+#             */
/*   Updated: 2023/12/02 06:57:29 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static t_list	*newone(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*current;
	t_list	*new_node;
	void	*new;

	ptr = NULL;
	current = NULL;
	while (lst)
	{
		new = f(lst->content);
		new_node = newone(new);
		if (!new_node)
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		if (!ptr)
			ptr = new_node;
		else
			current->next = new_node;
		current = new_node;
		lst = lst->next;
	}
	return (ptr);
}
