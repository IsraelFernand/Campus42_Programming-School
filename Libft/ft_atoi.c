/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:03 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/14 23:57:55 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result * sign > 2147483647)
			return (2147483647);
		if (result * sign < -2147483648)
			return (-2147483648);
		str++;
	}
	return ((int)(result * sign));
}

-----------------------------------------------------------------------------------
/* ft_atoi convierte una cadena de caracteres en un número entero. 
Ignora los espacios en blanco iniciales, maneja los signos '+' y '-', 
y convierte la secuencia numérica en su valor entero correspondiente. 
También gestiona desbordamientos devolviendo los valores límite de un int.
*\
-----------------------------------------------------------------------------------
#include <libft.h> /* Se incluye la cabecera de la librería para asegurar compatibilidad con el proyecto.
sign = 1; /* Se inicializa el signo como positivo.
result = 0; /* Se inicializa el resultado en 0.
while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')                 /* Se ignoran los espacios en blanco iniciales (según la tabla ASCII).
		str++; 
if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;                                               /* Se verifica si hay un signo '+' o '-'. 
		str++;                                                           /* Si es un '-', se cambia el signo a negativo
	}
while (*str >= '0' && *str <= '9')                                               /* Se convierte la secuencia de caracteres numéricos en un número entero.
	{
		result = result * 10 + (*str - '0');                             /* Se acumula el valor numérico.
		if (result * sign > 2147483647)                                  /* Se controla el desbordamiento para valores fuera del rango de un int.
			return (2147483647);                                     /* Retorna el valor máximo de un int.
		if (result * sign < -2147483648)
			return (-2147483648);                                    /* Retorna el valor mínimo de un int.
		str++;                                                          
	}
return ((int)(result * sign));                                                   /* Se devuelve el resultado convertido en int.

-----------------------------------------------------------------------------------
