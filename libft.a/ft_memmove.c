/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:45:38 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/20 20:30:01 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <string.h>

static void	nonoverlap(char *st1, const char *st2, int num)
{
	int	i;

	i = 0;
	while (i < num)
	{
		st1[i] = st2[i];
		i++;
	}
}

void	*ft_memmove(void *str1, const void *str2, int n)
{
	char		*s1;
	const char	*s2;
	int			i;

	i = n;
	s1 = str1;
	s2 = str2;
	if (*s1 == '\0' && *s2 == '\0')
		return (NULL);
	if (s1 > s2 && s1 < s2 + n)
	{
		while (i > 0)
		{
			s1[i - 1] = s2[i - 1];
			i--;
		}
	}
	else
	{
		nonoverlap(s1, s2, n);
	}
	return (str1);
}

// int	main(void)
// {
// 	char	str[20] = "Hello world";
// 	char	buffer[20];

// 	ft_memmove(buffer, str + 7, 7);
// 	// memmove(buffer, str + 7, 7);
// 	printf("Copied substring %s\n", buffer);
// 	return (0);
// }
