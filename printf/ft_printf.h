/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:58:43 by israelfe          #+#    #+#             */
/*   Updated: 2025/03/26 01:02:15 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_strlen(const char *str);
int	ft_num_nosign(unsigned int n);
int	ft_hexa_min(unsigned int n);
int	ft_hexa_mayus(unsigned int n);
int	ft_putptr(void *ptr);
int	ft_punt_hexa(unsigned long n);

#endif