/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:19:45 by vdaviot           #+#    #+#             */
/*   Updated: 2014/11/04 18:19:52 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

typedef struct s_List List;
struct		s_List
{
    List *next;
    void *data;
};

size_t	ft_strlen(const char *s);
char 	*ft_strdup(const char *s);
char 	*ft_strcpy(char *dest, const char *src);
char 	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char 	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char 	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char 	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void 	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *nptr);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strclr(char *s);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	**ft_strsplit(char const *s, char c);
char	*ft_strtrim(char const *s);
void	ft_strdel(char **as);
List	*ft_lst_addbeg(List *old, void *data);
List	*ft_lst_addend(List *list, void *data);
List	*ft_lst_create(void *data);
int		ft_lst_len(List *list);
List	*ft_lst_remove(List *list);
List	*ft_lst_remove_first(List *list);
void	ft_print_lst(List *list);

#endif