/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:17:35 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 18:30:32 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int				i;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char a[] = "okbitch";
// 	char b[] = "oksnitch";

// 	printf("%d\n", ft_memcmp(a, b, 0));
// 	// printf("%d\n", memcmp(a, b, 0));
// 	return (0);
// }