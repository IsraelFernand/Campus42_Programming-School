/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:30:35 by israelfe          #+#    #+#             */
/*   Updated: 2025/03/26 01:15:32 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
	{
		return (ft_putstr("(null)"));
	}
	count = 0;
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}
