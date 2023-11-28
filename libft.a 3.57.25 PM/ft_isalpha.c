/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:25:53 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/14 18:28:10 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalpha(int a)
{
	int	i;

	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'z';
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d\n", isalpha(c));
// 	return (0);
// }
