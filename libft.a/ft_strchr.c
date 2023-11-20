/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:20:30 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/17 12:21:39 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*j;

	j = s;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = s + i;
			break ;
		}
		else
		{
			i++;
		}
	}
	return ((char *)j);
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
