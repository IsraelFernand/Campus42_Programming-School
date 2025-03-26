/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punt_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:30:51 by israelfe          #+#    #+#             */
/*   Updated: 2025/03/26 01:52:10 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_punt_hexa(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_punt_hexa(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	if (!ptr)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	return (2 + ft_punt_hexa((unsigned long)ptr));
}
