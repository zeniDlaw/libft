/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:17:21 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/21 13:56:15 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	size_t num_elements = 10;
// 	size_t element_size = sizeof(int);

// 	int *myArray = (int *)calloc(num_elements, element_size);

// 	if (myArray != NULL)
// 	{
// 		for (size_t i = 0; i < num_elements; i++)
// 		{
// 			printf("myArray[%zu] = %d\n", i, myArray[i]);
// 		}
// 		free(myArray);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return (0);
// }
