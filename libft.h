/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:19 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/05 15:21:22 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/*****************************************************************************/
/*								MEMORY										 */
/*****************************************************************************/
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(void const *s, int c, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
void	*ft_memcpy(void *dst, void const *src, size_t n);
void	*ft_memmove(void *dst, void const *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

/*****************************************************************************/
/*								CHECKERS									 */
/*****************************************************************************/
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

/*****************************************************************************/
/*								STRINGS										 */
/*****************************************************************************/
char	**ft_split(char const *src, char delim);
char	*ft_strchr(char const *s, int c);
char	*ft_strdup(char const *s1);
void	ft_striteri(char const *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, char const *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, char const*src, size_t dstsize);
size_t	ft_strlen(char const *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(char const *s1, char const *s2, size_t n);
char	*ft_strnstr(char const *haystack, char const *needle, size_t len);
char	*ft_strrchr(char const *s, int c);
char	*ft_strtrim(char const *s, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*****************************************************************************/
/*								CONVERTERS									 */
/*****************************************************************************/
int		ft_atoi(char const *str);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*****************************************************************************/
/*								PRINTERS									 */
/*****************************************************************************/
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif