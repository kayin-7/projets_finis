/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:42:00 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/30 12:42:00 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_putchar_fd(char c)
{
	int	imp;

	imp = write(1, &c, 1);
	return (imp);
}

int	ft_putstr_fd(char *str)
{
	char	*a;
	 int	imp;

	if (str == 0)
	{
		imp = write(1, "(null)", 6);
		return (imp);
	}
	a = str;
	while (*a)
		a++;
	imp = write (1, str, a - str);
	return (imp);
}

int	ft_putnbr_fd(int number)
{
	int	imp;

	imp = 0;
	if (number == -2147483648)
	{
		imp += ft_putchar_fd ('-');
		imp += ft_putchar_fd ('2');
		number = 147483648;
	}
	if (number < 0)
	{
		imp += ft_putchar_fd ('-');
		number = -(number);
	}
	if (number > 9)
	{
		imp += ft_putnbr_fd(number / 10);
		imp += ft_putnbr_fd(number % 10);
	}
	else
		imp += ft_putchar_fd(number + '0');
	return (imp);
}

int	ft_inttohex(unsigned int number)
{
	int	imp;

	imp = 0;
	if (number > 15)
	{
		imp += ft_inttohex(number / 16);
		imp += ft_inttohex(number % 16);
	}
	else if (number > 9)
		imp += ft_putchar_fd(number + 87);
	else
		imp += ft_putchar_fd(number + '0');
	return (imp);
}

int	ft_inttohexu(unsigned int number)
{
	int	imp;

	imp = 0;
	if (number > 15)
	{
		imp += ft_inttohexu(number / 16);
		imp += ft_inttohexu(number % 16);
	}
	else if (number > 9)
		imp += ft_putchar_fd(number + 55);
	else
		imp += ft_putchar_fd(number + '0');
	return (imp);
}
