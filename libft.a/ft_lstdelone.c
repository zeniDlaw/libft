/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 04:28:34 by ichettri          #+#    #+#             */
/*   Updated: 2023/12/02 05:40:14 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*current;

	current = lst;
	if (lst == NULL || del == NULL)
	{
		return ;
	}
	del(current->content);
	free(current);
	lst = NULL;
}
