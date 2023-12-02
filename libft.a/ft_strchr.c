/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:20:30 by ichettri          #+#    #+#             */
/*   Updated: 2023/12/02 07:06:15 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	if (*s == (char)c)
		return (s);
	return (NULL);
}

// int	main(void)
// {
// 	char	src[] = "Hellocallum";
// 	char	s;
// 	char	*res;
// 	char *res1;
// 	s = 'u';
// 	res1 = ft_strchr(src, s);
// 	res = strchr(src, 'o');
// 	printf("%s\n", res);
// 	printf("%s\n", res1);
// 	return (0);
// }
