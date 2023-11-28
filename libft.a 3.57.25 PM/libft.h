/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:26:07 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/24 19:45:46 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H "libft.h"

# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(int c);
int		ft_isalpha(char a);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_strlcpy(char *dst, const char *src, int dstsize);
char	*ft_strchr(const char *s, int c);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, int n);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, int n);
void	*ft_memchr(const void *str, int c, int n);
int		ft_memcmp(const void *s1, const void *s2, int n);
char	*ft_strnstr(const char *haystack, const char *needle, int len);
char	*ft_strdup(char *src);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);

#endif