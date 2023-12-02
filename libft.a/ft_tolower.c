/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:25:41 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/29 12:09:12 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		ch = ch + 32;
	}
	return (ch);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'A';
// 	printf("%c", ft_tolower(c));
// 	return (0);
// }
