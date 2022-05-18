/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:25:26 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/13 16:06:29 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	 int	i;

	i = -1;
	if (s != 0)
	{
		while (s[++i])
		{
			f(i, s + i);
		}
	}
}
