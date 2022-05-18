/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:30:00 by gjoli             #+#    #+#             */
/*   Updated: 2022/05/17 14:10:00 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

int				ft_strchri(const char *s);
int				ft_strcmp(const char *s1, const char *s2);
void			*ft_calloc(unsigned long nmemb, unsigned long size);
char			*init(char *lect, int fd);
char			*ft_strcat(char *dest, char const *src);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strdup(char *src);
char			*ft_substr(char const *s, unsigned int start, int len);
char			*ft_strcpy(char *dest, char *src);
char			*get_next_line(int fd);
unsigned int	ft_strlen(char const *str);
#endif
