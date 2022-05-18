/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:34:22 by gjoli             #+#    #+#             */
/*   Updated: 2022/01/18 10:34:25 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	         char		*tmp;
	unsigned long		i;

	tmp = (char *)src;
	while (*tmp)
		tmp++;
	i = tmp - src;
	if (size == 0)
		return (i);
	tmp = dest;
	while (--size && *src)
		*dest++ = *src++;
	*dest = 0;
	return (i);
}
