/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:08:32 by jordan            #+#    #+#             */
/*   Updated: 2026/10/15 11:16:04 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexadecimal(unsigned long int n, char *base)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 16)
		count = count + ft_putnbr_hexadecimal(n / 16, base);
	c = base[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}
