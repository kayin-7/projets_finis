/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:16:56 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/25 10:19:04 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_putnbru_fd(unsigned int number);
int	ft_putpnt_fd(unsigned long number);
int	ft_pointer(unsigned long number);
int	ft_printf(const char *format, ...);
int	ft_putchar_fd(char c);
int	ft_putstr_fd(char *str);
int	ft_putnbr_fd(int number);
int	ft_inttohex(unsigned int number);
int	ft_inttohexu(unsigned int number);
int	ft_printf(const char *format, ...);

#endif
