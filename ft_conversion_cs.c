/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_cs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:05:58 by jordan            #+#    #+#             */
/*   Updated: 2026/10/15 15:24:35 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_string(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_conversion_cs(char c, va_list *args)
{
	char	lettre;
	char	*s;

	if (c == 'c')
	{
		lettre = va_arg(*args, int);
		write(1, &lettre, 1);
		return (1);
	}
	if (c == 's')
	{
		s = va_arg(*args, char *);
		return (ft_print_string(s));
	}
	return (0);
}
