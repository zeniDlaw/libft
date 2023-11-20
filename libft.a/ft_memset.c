/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:56:37 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/14 18:35:25 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

void	*ft_memset(void *b, char c, int len)
{
	int		i;
	char	*p;
	char	*d;

	d = &c;
	i = 0;
	p = b;
	if (len >= 0)
	{
		while (i <= len - 1)
		{
			p[i] = *d;
			i++;
		}
	}
	else
	{
		return (b);
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[10];
// 	char	str1[10];

// 	ft_memset(str1, 'A', 8);
//  memset(str, 'A', 10);
// 	printf("%s\n", str1);
// 	return (0);
// }
