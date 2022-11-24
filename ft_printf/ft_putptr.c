/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 02:46:39 by hassnaoui         #+#    #+#             */
/*   Updated: 2022/11/23 18:10:26 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_base(unsigned long int nbr, char Xx, int *len)
{
	unsigned long int	base_len;
	char				*base;

	base_len = 16;
	if (Xx == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < base_len)
		ft_putchar(base[nbr % base_len], len);
	else
	{
		ft_putptr_base(nbr / base_len, Xx, len);
		ft_putptr_base(nbr % base_len, Xx, len);
	}
}

void	ft_putptr(long elem, int *len)
{
	ft_putstr("0x", len);
	ft_putptr_base(elem, 'x', len);
}
