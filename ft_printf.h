/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:17:09 by jordan            #+#    #+#             */
/*   Updated: 2026/10/26 11:14:36 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_conversion(char c, va_list *args);
int	ft_putnbr_hexadecimal(unsigned long int n, char *base);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putnbr(int n);
int	ft_conversion_num(char c, va_list *args);
int	ft_conversion_ptr(va_list *args);
int	ft_conversion_cs(char c, va_list *args);

#endif
