/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:06:13 by jordan            #+#    #+#             */
/*   Updated: 2026/10/15 11:17:49 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion_num(char c, va_list *args)
{
	int				n;
	unsigned int	nbr;

	if (c == 'd' || c == 'i')
	{
		n = va_arg(*args, int);
		return (ft_putnbr(n));
	}
	if (c == 'u')
	{
		nbr = va_arg(*args, unsigned int);
		return (ft_putnbr_unsigned(nbr));
	}
	if (c == 'x')
	{
		nbr = va_arg(*args, unsigned int);
		return (ft_putnbr_hexadecimal(nbr, "0123456789abcdef"));
	}
	if (c == 'X')
	{
		nbr = va_arg(*args, unsigned int);
		return (ft_putnbr_hexadecimal(nbr, "0123456789ABCDEF"));
	}
	return (0);
}
