/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:42:27 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 18:17:17 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*s;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	s = (char *)src;
	while (n--)
		*dest++ = *s++;
	return (dst);
}

// int	main(void)
// {
// 	char	src[10];
// 	char	dst[50];

// 	printf("%s\n", ft_memcpy("abcdefghij", "abcdefgxyz", 7));
// 	// printf("%s\n", memcpy("abcdefghij", "abcdefgxyz", 7));
// 	// printf("%s\n", dst);
// 	return (0);
// }
