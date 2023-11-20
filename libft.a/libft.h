/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichettri <ichettri@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:26:07 by ichettri          #+#    #+#             */
/*   Updated: 2023/11/20 20:03:29 by ichettri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H "libft.h"

# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isalpha(char a);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_strlcpy(char *dst, const char *src, int dstsize);
char	*ft_strchr(const char *s, int c);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_memcpy(void *dst, const void *src, int n);
void	*ft_memmove(void *str1, const void *str2, int n);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, int n);
void	*ft_memchr(const void *str, int c, int n);
int		ft_memcmp(const void *s1, const void *s2, int n);
char	*ft_strnstr(const char *haystack, const char *needle, int len);

#endif
