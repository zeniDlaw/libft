/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:46:34 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 18:55:05 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimm;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	trimm = malloc(j - i + 2);
	if (!trimm)
		return (NULL);
	k = 0;
	while (i <= j)
		trimm[k++] = s1[i++];
	trimm[k] = '\0';
	return (trimm);
}

// int	main(void)
// {
// 	char	dst[] = " lorem ipsum dolor sit amet";
// 	char	*r;

// 	r = ft_strtrim(dst, "l ");
// 	printf("%s", r);
// 	return (0);
// }
