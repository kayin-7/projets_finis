/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:34:22 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/09 10:34:25 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, long n)
{
	      char	*d;
	      char	*ld;
	const char	*s;
	const char	*ls;

	d = dest;
	s = src;
	if (d == 0 && s == 0 )
		return (d);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		ls = s + (n - 1);
		ld = d + (n - 1);
		while (n--)
			*ld-- = *ls--;
	}
	return (dest);
}
