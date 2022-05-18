/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 07:30:01 by gjoli             #+#    #+#             */
/*   Updated: 2022/01/19 07:30:04 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int		n;
	unsigned int		dl;
	         char		*d;
	         char		*s;

	d = dest;
	s = (char *)src;
	n = size;
	while (n-- && *d)
		d++;
	dl = d - dest;
	n = size - dl;
	if (n == 0)
		return (dl + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = 0;
	return (dl + (s - src));
}
