/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:15:23 by ichettri          #+#    #+#             */
/*   Updated: 2023/12/01 14:41:54 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
#include <stdlib.h>

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*node1;

	node1 = (t_list *)malloc(sizeof(t_list));
	if (node1 == NULL)
		return (NULL);
	node1->content = content;
	node1->next = NULL;
	return (node1);
}

// int	main(void)
// {
// 	t_list *node;

// 	node = ft_lstnew("Hello");
// 	if (node != NULL)
// 	{
// 		printf("Content: %s\n", (char *)node->content);
// 		free(node);
// 	}
// 	return (0);
// }