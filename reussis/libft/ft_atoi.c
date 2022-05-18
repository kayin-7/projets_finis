/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:25:26 by gjoli             #+#    #+#             */
/*   Updated: 2022/01/20 13:25:29 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	poids;
	int	nombre;
	int	minus;

	minus = 1;
	i = 0;
	nombre = 0;
	poids = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{	
		if (str[i] == '-')
			minus = - (minus);
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nombre = ((nombre * poids) + (str[i] - '1')) + 1;
		i++;
		if (poids == 1)
			poids *= 10;
	}
	return (nombre * minus);
}
