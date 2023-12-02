/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:43:15 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/28 15:44:25 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
#include <stdlib.h>

// static char	toupper_converter(unsigned int i, char c)
// {
// 	c = c - i;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*result;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char src[] = "HelloMama";
// 	char *dst;

// 	dst = ft_strmapi(src, &toupper_converter);
// 	printf("%s\n", dst);
// 	free(dst);
// 	return (0);
// }