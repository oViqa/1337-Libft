/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:57:02 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/05 13:30:03 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

size_t			ft_strlen(const char *s);
void			*ft_memmove(void *dest, const void *src, size_t count);
int				ft_atoi(const char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
void			ft_putchar(char c);
void			*ft_memcpy(void *dst, const void *src, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *dest, char *src);
void			ft_putchar(char c);
void			*ft_memset(void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
int				ft_isprint(int c);
int				ft_isalnum(int c);
void			ft_bzero(void *s, size_t n);
int				ft_isascii(int c);
char			*ft_strrchr(const char *s, int c);
void	ft_putnbr(int nb);
void	ft_putstr(char const *str);
void	ft_putendl(char const *s);
#endif
