/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 06:16:13 by ichettri          #+#    #+#             */
/*   Updated: 2023/12/02 06:23:02 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (lst != NULL)
	{
		ptr = NULL;
		ptr = lst;
		while (ptr != NULL)
		{
			f(ptr->content);
			ptr = ptr->next;
		}
	}
}
