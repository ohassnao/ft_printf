/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:01:21 by hassnaoui         #+#    #+#             */
/*   Updated: 2022/11/23 18:22:37 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	checking(va_list args, const char format, int *len)
{
	if (format == 'i' || format == 'd')
		ft_putnbr(va_arg(args, int), len);
	else if (format == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (format == 'p')
		ft_putptr(va_arg(args, long), len);
	else if (format == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), len);
	else if (format == 'x')
		ft_putnbr_hex(va_arg(args, unsigned int), format, len);
	else if (format == 'X')
		ft_putnbr_hex(va_arg(args, unsigned int), format, len);
	else
		ft_putchar(format, len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	if (write(1, 0, 0) == -1)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			if (*++format == '\0')
				break ;
			checking(args, *format, &len);
		}
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
