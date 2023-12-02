/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:55:23 by ichettri          #+#    #+#             */
/*   Updated: 2023/12/02 07:07:39 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch = ch - 32;
	}
	return (ch);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'z';
// 	printf("%c", ft_toupper(c));
// 	return (0);
// }
