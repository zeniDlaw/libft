/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:58:56 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 18:31:43 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, int n)
{
	char	*s;

	s = (char *)str;
	while (n--)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	src[] = "Hellocallum";
// 	char	s;
// 	char	*res;

// 	s = 'u';
// 	// res = ft_memchr(src, 'o',6);
// 	res = memchr(src, 'o', 6);
// 	printf("%s", res);
// 	return (0);
// }
