/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:59:02 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/13 15:48:08 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalnum(int c)
{
	int	i;

	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
// 	printf("%d\n", ft_isalnum('+'));
// 	printf("%d\n", isalnum('+'));
//     return (0);
// }
