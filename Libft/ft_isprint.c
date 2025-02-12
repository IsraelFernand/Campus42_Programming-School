/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:18:09 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/15 00:07:16 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

-----------------------------------------------------------------------------------
ft_isprint verifica si un carácter es imprimible, es decir, si pertenece 
al rango ASCII de caracteres visibles (32-126). Es útil para validar 
entradas en funciones que manipulan texto legible.
-----------------------------------------------------------------------------------
if (c >= 32 && c <= 126)  /* Verifica si el valor de 'c' está dentro del rango de caracteres imprimibles en ASCII.
return (1);  /* Retorna 1 si el carácter es imprimible. 
return (0);  /* Retorna 0 si el carácter no es imprimible.
-----------------------------------------------------------------------------------	
