/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 09:20:04 by jordan            #+#    #+#             */
/*   Updated: 2026/10/15 11:14:37 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char c, va_list *args)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X')
		return (ft_conversion_num(c, args));
	if (c == 'c' || c == 's')
		return (ft_conversion_cs(c, args));
	if (c == 'p')
		return (ft_conversion_ptr(args));
	if (c == '%')
	{
		write(1, &c, 1);
		return (1);
	}
	return (0);
}
