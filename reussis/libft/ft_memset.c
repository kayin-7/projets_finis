/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:34:22 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/09 10:34:25 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(const void *s, unsigned char c, unsigned long n)
{
	unsigned long	i;
	unsigned char	*r;

	r = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		r[i] = c;
		i++;
	}
	return (r);
}
