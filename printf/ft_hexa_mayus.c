/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_mayus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:31:06 by israelfe          #+#    #+#             */
/*   Updated: 2025/03/26 01:17:14 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_mayus(unsigned int n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_hexa_mayus(n / 16);
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}
