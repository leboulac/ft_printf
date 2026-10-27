/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:40:53 by jordan            #+#    #+#             */
/*   Updated: 2026/10/19 10:41:18 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_char(const char *s, int *i, int *count)
{
	write(1, &s[*i], 1);
	(*i)++;
	(*count)++;
}

static void	ft_is_pourcentage(const char *s, int *i,
		int *count, va_list *args)
{
	if (s[*i] == '%')
	{
		if (s[*i + 1] == '\0')
		{
			write(1, &s[*i], 1);
			(*count)++;
			(*i)++;
			return ;
		}
		(*i)++;
		(*count) += ft_conversion(s[*i], args);
		(*i)++;
	}
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			ft_is_pourcentage(s, &i, &count, &args);
		else
			ft_print_char(s, &i, &count);
	}
	va_end(args);
	return (count);
}
