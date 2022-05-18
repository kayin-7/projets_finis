/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
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

int	ft_putnbru_fd(unsigned int number)
{
	int	imp;

	imp = 0;
	if (number > 9)
	{
		imp += ft_putnbru_fd(number / 10);
		imp += ft_putnbru_fd(number % 10);
	}
	else
	{	
		imp += ft_putchar_fd(number + '0');
	}
	return (imp);
}

int	ft_putpnt_fd(unsigned long number)
{
	int	imp;

	imp = 0;
	if (number > 15)
	{
		imp += ft_putpnt_fd(number / 16);
		imp += ft_putpnt_fd(number % 16);
	}
	else if (number > 9)
		imp += ft_putchar_fd(number + 87);
	else
		imp += ft_putchar_fd(number + '0');
	return (imp);
}

int	ft_pointer(unsigned long number)
{
	int	imp;

	imp = 0;
	if (number != 0)
	{
		imp += ft_putstr_fd("0x");
		imp += ft_putpnt_fd(number);
	}
	else
		imp = write (1, "(nil)", 5);
	return (imp);
}

int	ft_multivar(va_list p, char c)
{
	int	n;

	n = 0;
	if (c == '%')
		n += ft_putchar_fd(c);
	if (c == 'c')
		n += ft_putchar_fd((char)va_arg (p, int));
	if (c == 's')
		n += ft_putstr_fd((char *)va_arg (p, char *));
	if (c == 'd' || c == 'i')
		n += ft_putnbr_fd(va_arg (p, int));
	if (c == 'x')
		n += ft_inttohex(va_arg (p, unsigned int ));
	if (c == 'X')
		n += ft_inttohexu(va_arg (p, unsigned int ));
	if (c == 'u')
		n += ft_putnbru_fd(va_arg (p, unsigned int ));
	if (c == 'p')
		n += ft_pointer(va_arg (p, unsigned long ));
	return (n);
}

int	ft_printf(const char *format, ...)
{
	    int	i;
	    int	n;
	va_list	args;

	n = 0;
	i = -1;
	va_start (args, format);
	while (format[++i])
	{
		if (format[i] != '%' )
			ft_putchar_fd(format[i]);
		else
		{
			i++;
			n -= 2;
			n += ft_multivar(args, format[i]);
		}
	}
	va_end (args);
	return (n + i);
}
