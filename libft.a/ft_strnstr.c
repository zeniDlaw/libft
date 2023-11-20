/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:26:49 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/20 19:35:25 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int		i;
	int		j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	src[] = "mybaby";
// 	char	dst[] = "no";
// 	char	*ptr;

// 	ptr = ft_strnstr(src, "bab", 5);
//     // ptr = strnstr(src, "bab", 5);

// 	printf("%s\n", ptr);
// 	return (0);
// }
