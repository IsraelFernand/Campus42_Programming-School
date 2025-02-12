/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:14:16 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/15 00:05:38 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

-----------------------------------------------------------------------------------
ft_isdigit verifica si un carácter es un dígito numérico (0-9). 
Se usa comúnmente para validar entradas que solo deben contener números, 
como conversiones de cadenas a enteros.
-----------------------------------------------------------------------------------
#include <libft.h>  /* Se incluye la cabecera de la librería para asegurar compatibilidad con el proyecto.
if (c >= '0' && c <= '9')  /* Verifica si el valor de 'c' está en el rango de los números ASCII.
return (1);  /* Retorna 1 si el carácter es un dígito numérico.
return (0);  /* Retorna 0 si el carácter no es un número.
-----------------------------------------------------------------------------------
