/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:18:26 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/01 13:18:26 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	 int	i;
	char	*r;

	i = 0;
	r = 0;
	if (c > 256)
		c -= 256;
	while (s[i])
	{
		if (s[i] == c)
			r = ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (r);
}
