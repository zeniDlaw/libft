/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:32:24 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/20 20:37:29 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*des;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	des = (char *)malloc(sizeof(*des) * (len + 1));
	len = 0;
	while (src[len] != '\0')
	{
		des[len] = src[len];
		len++;
	}
	des[len] = '\0';
	return (des);
}

int	main(void)
{
	char	source[] = "bdasbdudbaudbdsddsadadadawd";
	char	*target;

	target = ft_strdup(source);
	printf("%s", target);
	return (0);
}
