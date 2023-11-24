/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:20:30 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 18:29:32 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>
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

// 	s = 'u';
// 	res = ft_strchr(src, s);
// 	res = strchr(src, 'o');
// 	printf("%s", res);
// 	return (0);
// }
