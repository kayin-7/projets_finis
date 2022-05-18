/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                		 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:20:35 by gjoli             #+#    #+#             */
/*   Updated: 2022/03/30 11:20:39 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	ft_abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (-1);
	}
	else
		return (1);
}

static int	ft_nbchiffre(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
	}
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	ft_swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	ft_rev_char_tab(char *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

char	*ft_itoa(int n)
{
	 int		i;
	char		*inv;
	char		neg;

	i = ft_nbchiffre(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	inv = malloc (sizeof (char) * (i + 1));
	if (inv == NULL)
		return (NULL);
	neg = ft_abs(n);
	n *= neg;
	i = 0;
	while (n > 0)
	{
		inv[i++] = (n % 10) + 48;
		n /= 10;
	}
	if (neg == -1)
		inv[i++] = '-';
	inv[i] = '\0';
	ft_rev_char_tab(inv, ft_strlen(inv));
	return (inv);
}
