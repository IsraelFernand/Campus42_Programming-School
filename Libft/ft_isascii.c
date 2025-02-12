/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:21:17 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/14 23:06:07 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

-----------------------------------------------------------------------------------
ft_isascii verifica si un carácter pertenece a la tabla ASCII estándar, 
que abarca los valores del 0 al 127. Es útil para validar datos en entornos 
donde solo se permiten caracteres ASCII.
-----------------------------------------------------------------------------------
#include <libft.h>  /* Se incluye la cabecera de la librería para asegurar compatibilidad con el proyecto.
if (c >= 0 && c <= 127)  /* Verifica si el valor de 'c' está dentro del rango ASCII. 
return (1);  /* Retorna 1 si es un carácter ASCII válido. 
return (0);  /* Retorna 0 si el carácter está fuera del rango ASCII.
-----------------------------------------------------------------------------------
