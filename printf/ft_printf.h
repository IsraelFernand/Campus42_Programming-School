/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:58:43 by israelfe          #+#    #+#             */
/*   Updated: 2025/02/12 16:41:11 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>  /* Se usa para write(), que nos permite imprimir caracteres en la salida estándar */ 
# include <stdio.h>   /* Se usa para printf() */
# include <stdlib.h>  /* Se usa para malloc() */
# include <stdarg.h>  /* Se usa para manejar argumentos variables */

// Función principal
int				ft_printf(const char *str, ...);    /* Función principal que se encarga de imprimir en la salida estándar */

// Funciones auxiliares para impresión
int				ft_putchar(char c);                 /* Imprime un solo caracter */
int				ft_putstr(const char *s);           /* Imprime una cadena de caracteres */
int				ft_putnbr(int n);                   /* Imprime un número entero */
unsigned int	ft_num_nosign(unsigned int num);    /* Imprime un número sin signo */
int				ft_putpointer(void *p);             /* Imprime un puntero */
int				ft_hexa_min(unsigned int num);      /* Imprime un número en hexadecimal en minúsculas */
int				ft_hexa_mayus(unsigned int num);    /* Imprime un número en hexadecimal en mayúsculas */
int				ft_strlen(const char *s);          /* Calcula la longitud de una cadena de caracteres */

// Funciones para manejar formatos
int				process_format(const char *format, va_list args); /* Procesa el formato de la cadena */
int				handle_conversion(char specifier, va_list args);  /* Maneja la conversión de un argumento */

#endif
