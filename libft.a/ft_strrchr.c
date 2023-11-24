/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:59:54 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 18:48:10 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		++s;
	}
	if (!c)
		ret = ((char *)s);
	return (ret);
}

// int	main(void)
// {
// 	char	src[] = "Hullocallum";
// 	char	s;
// 	char	*res;

// 	s = 'u';
// 	res = ft_strrchr(src, s);
// 	// res = strchr(src, 'o');
// 	printf("%s", res);
// 	return (0);
// }
