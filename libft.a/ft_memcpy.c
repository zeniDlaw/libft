/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:42:27 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/20 11:32:44 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int			i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[10];
// 	char	dst[50];

// 	ft_memcpy(dst, src, 4);
// 	// memcpy(dst, src, 4);
// 	printf("%s\n", dst);
// 	return (0);
// }
