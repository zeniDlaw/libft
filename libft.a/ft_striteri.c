/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:13:57 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/28 15:44:14 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	example_function(unsigned int index, char *ch)
// {
// 	*ch = *ch + index;
// }

// int	main(void)
// {
// 	char	str[] = "hello";

// 	ft_striteri(str, example_function);
// 	printf("%s\n", str);
// 	return (0);
// }
