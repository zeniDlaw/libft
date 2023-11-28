/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:01:38 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 18:59:00 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char	src[] = "HellwhatsoBaby";
// 	char	*dest;

// 	dest = ft_substr(src, 4, 6);
// 	printf("%s\n", dest);
// 	return (0);
// }
