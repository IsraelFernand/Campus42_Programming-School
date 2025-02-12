/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:17:49 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/15 00:03:59 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

-----------------------------------------------------------------------------------
ft_isalnum verifica si un carácter es alfanumérico, es decir, si es una 
letra (mayúscula o minúscula) o un dígito numérico. Se utiliza comúnmente 
para validar entradas en programas que requieren distinguir entre caracteres válidos e inválidos *\
-----------------------------------------------------------------------------------
#include <libft.h>  /* Se incluye la cabecera de la librería propia para asegurar la compatibilidad con el resto del proyecto. */
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')  /* Comprueba si el valor ASCII de 'c' es una letra */
|| (c >= '0' && c <= '9')) /* Comprueba si el valor ASCII de 'c' es un número */
return (1); /* Retorna 1 si el carácter es alfanumérico */
return (0); /* Retorna 0 si el carácter no es alfanumérico */
-----------------------------------------------------------------------------------
