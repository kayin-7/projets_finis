/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 07:40:09 by gjoli             #+#    #+#             */
/*   Updated: 2022/01/20 11:12:09 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	if (number == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putchar_fd ('2', fd);
		number = 147483648;
	}
	if (number < 0)
	{
		ft_putchar_fd ('-', fd);
		number = -(number);
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	else
		ft_putchar_fd(number + '0', fd);
}
