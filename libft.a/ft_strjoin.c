/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:31:44 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 18:10:29 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*joined_ptr;

	if (!s1 || !s2)
		return (NULL);
	joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (NULL);
	joined_ptr = joined;
	while (*s1)
		*joined_ptr++ = *s1++;
	while (*s2)
		*joined_ptr++ = *s2++;
	*joined_ptr = '\0';
	return (joined);
}

// int	main(void)
// {
// 	char	a[] = "hello";
// 	char	b[] = "world";
// 	char	*dest;

// 	dest = ft_strjoin(a, b);
// 	printf("%s\n", dest);
// 	return (0);
// }
