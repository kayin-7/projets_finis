/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:34:22 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/09 10:34:25 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *dest, const void *src, unsigned long n)
{
	unsigned long	i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d == 0 && s == 0 )
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
