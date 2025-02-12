/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:41:55 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/14 22:54:39 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

-----------------------------------------------------------------------------------
/* El código ft_isalpha sirve para verificar si un carácter es alfabético, es decir, 
si es una letra mayúscula o minúscula del alfabeto, devolviendo 1 si lo es y 0 en caso contrario.
En el proyecto Libft, esta función es una versión personalizada de la función estándar isalpha, 
creada para aprender cómo funcionan estas herramientas y reutilizarla en futuros proyectos.
-----------------------------------------------------------------------------------
#include <libft.h>                                     /* Se incluye el archivo de cabecera libft.h, que contiene el prototipo de la función ft_isalpha
int	ft_isalpha(int c)                              /* Se declara la función ft_isalpha, que recibe un entero c (normalmente el valor ASCII ) como argumento y devuelve un entero
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))  /* (c >= 'A' && c <= 'Z'): Comprueba si el carácter está entre 'A' y 'Z' (letras mayúsculas).
	                                               /* (c >= 'a' && c <= 'z'): Comprueba si el carácter está entre 'a' y 'z' (letras minúsculas).

return (1);                                            /*  Devuelve 1 y si no cumple la candición devuelve 0.
return (0);
-----------------------------------------------------------------------------------
