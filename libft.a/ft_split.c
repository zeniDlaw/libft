/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:40:52 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 19:52:09 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Function to get the number of words in a string
int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

// Function to get the length of the next word in a string
int	word_length(char const *s, char c)
{
	int	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

int	*allocate_memory(char **result, char const *s, int word_count, int word_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (word_count > 0)
	{
		result[i] = (char *)malloc((word_len + 1) * sizeof(char));
		if (result[i] == NULL)
		{
			while (i > 0)
				free(result[--i]);
			free(result);
			return (NULL);
		}
		j = 0;
		while (j < word_len)
			result[i][j++] = *s++;
		result[i][j] = '\0';
		i++;
		word_count--;
	}
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	int		i;
	int		word_len;
	int		j;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	j = allocate_memory(result, s, word_count, word_len);
	if (j == NULL)
		return (NULL);
	result[i] = NULL;
	return (result);
}

// Function to free the memory allocated by ft_split
void	free_split(char **split)
{
	int	i;

	if (split == NULL)
		return ;
	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

// int	main(void)
// {
// 	const char	*input = "Thisisasamplesentence";
// 	char		delimiter;
// 	char		**result;

// 	// Example usage
// 	delimiter = 'i';
// 	result = ft_split(input, delimiter);
// 	if (result != NULL)
// 	{
// 		// Print or use the array of strings
// 		for (int i = 0; result[i] != NULL; i++)
// 		{
// 			printf("Word %d: '%s'\n", i, result[i]);
// 		}
// 		// Don't forget to free the allocated memory when done
// 		free_split(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
