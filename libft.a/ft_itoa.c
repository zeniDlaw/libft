/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:08:01 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/28 11:58:16 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

static void	reverse_it(char *str, int i)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = i - 1;
	while (start < end)
	{
		if (str[start] == '-')
		{
			start++;
		}
		else
		{
			temp = str[start];
			str[start] = str[end];
			str[end] = temp;
			start++;
			end--;
		}
	}
}

static int	numofint(int st)
{
	int	temp;
	int	i;

	i = 0;
	temp = st;
	while (temp != 0)
	{
		temp /= 10;
		i++;
	}
	return (i);
}

void	converter(char *str, long long n)
{
	int	i;
	int	digit;

	i = 0;
	if (n == 0)
	{
		str[i] = '0';
		i++;
		str[i] = '\0';
	}
	else if (n < 0)
	{
		str[i] = '-';
		n = -n;
		i++;
	}
	while (n != 0)
	{
		digit = n % 10;
		str[i] = digit + '0';
		n /= 10;
		i++;
	}
	str[i] = '\0';
	reverse_it(str, i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	i = numofint(n);
	result = (char *)malloc((i + 2) * sizeof(char));
	if (result == NULL)
		return (NULL);
	converter(result, n);
	return (result);
}

// int	main(void)
// {
// 	char	*final;

// 	printf("%s\n", final = ft_itoa(-2147483648));
// 	free(final);
// 	return (0);
// }
