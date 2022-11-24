/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 03:51:03 by hassnaoui         #+#    #+#             */
/*   Updated: 2022/11/23 18:09:42 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr_hex(unsigned int nbr, char Xx, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putnbr_unsigned(unsigned int nbr, int *len);
void	ft_putptr(long elem, int *len);
void	ft_putstr(char *s, int *len);

#endif
