/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:25:36 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/20 17:25:42 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	if (*s1 != '\0' && *s2 != '\0')
	{
		while (i < n)
		{
			n--;
			while (s1[i] == s2[i])
			{
				i++;
			}
		}
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	// char	s1[] = "abcdef";
// 	// char	s2[] = abc\375xx"";

// 	printf("%d\n",ft_strncmp("abcdef", "abc\375xx", 5));
// 	return (0);
// }
