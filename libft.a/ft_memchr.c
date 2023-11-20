/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:58:56 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/20 14:15:23 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *str, int c, int n)
{
	int			i;
	const char	*s;

	s = str;
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
		{
			s = str + i;
			break ;
		}
		else
		{
			i++;
		}
	}
	return ((char *)s);
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
