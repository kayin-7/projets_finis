/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 21:02:55 by gjoli             #+#    #+#             */
/*   Updated: 2022/01/21 08:31:59 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	l1;
	unsigned int	l2;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 < l2)
		l1 = l2;
	while (i < n && i < l1)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
