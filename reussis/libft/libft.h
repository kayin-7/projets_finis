/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:16:56 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/14 10:19:04 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					 void (*del)(void *));
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
int				ft_lstsize(t_list *lst);
int				ft_atoi(const char *str);
int				ft_isalnum(char c);
int				ft_isalpha(char c);
int				ft_isascii(int c);
int				ft_isdigit(char c);
int				ft_isprint(char c);
int				ft_memcmp(const void *r1, const void *r2, unsigned int n);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *src);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *big, const char *little, int len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, int len);
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			*ft_memccpy(void *t, const void *f, int c, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned long size);
void			*ft_memcpy(const void *dest, const void *src, unsigned long n);
void			*ft_memmove(void *dest, const void *src, long n);
void			*ft_memset(const void *s, unsigned char c, unsigned long n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int number, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_bzero(const void *s, unsigned long n);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			*ft_calloc(unsigned long nmemb, unsigned long size);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlen(char const *str);
#endif
