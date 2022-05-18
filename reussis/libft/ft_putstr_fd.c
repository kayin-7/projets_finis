/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:43:56 by gjoli            #+#    #+#             */
/*   Updated: 2022/04/14 10:43:56 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	char	*a;

	if (str == 0 || fd == 0)
		return ;
	a = str;
	while (*a)
		a++;
	write (fd, str, a - str);
}
