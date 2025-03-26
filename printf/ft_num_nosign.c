/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_nosign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:30:57 by israelfe          #+#    #+#             */
/*   Updated: 2025/03/26 01:16:10 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_nosign(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_num_nosign(n / 10);
		count += ft_num_nosign(n % 10);
	}
	else
	{
		count += ft_putchar(n + '0');
	}
	return (count);
}
