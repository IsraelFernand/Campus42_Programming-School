/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:25:17 by israelfe          #+#    #+#             */
/*   Updated: 2025/03/26 01:17:56 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_num_nosign(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_hexa_min(va_arg(args, unsigned int)));
	if (c == 'X')
		return (ft_hexa_mayus(va_arg(args, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		total;

	va_start(args, format);
	i = 0;
	total = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			total += ft_format(format[i], args);
		}
		else
		{
			total += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (total);
}
