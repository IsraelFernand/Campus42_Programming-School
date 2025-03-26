/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:31:02 by israelfe          #+#    #+#             */
/*   Updated: 2025/03/26 01:16:47 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_min(unsigned int n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_hexa_min(n / 16);
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}
