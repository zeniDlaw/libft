/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:17:35 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/20 14:57:48 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int			i;
	const char	*src;
	const char	*src1;

	i = 0;
	src = s1;
	src1 = s2;
	while (i < n)
	{
		while (src[i] != '\0' && src1[i] != '\0' && src[i] == src1[i])
		{
			i++;
		}
		n--;
	}
	return (src[i] - src1[i]);
}

// int	main(void)
// {
// 	char a[] = "okbitch";
// 	char b[] = "oksnitch";

// 	printf("%d\n", ft_memcmp(a, b, 0));
// 	// printf("%d\n", memcmp(a, b, 0));
// 	return (0);
// }