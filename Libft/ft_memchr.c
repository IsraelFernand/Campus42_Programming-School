/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:22 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/14 23:08:22 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = (const unsigned char *)s;

	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

-----------------------------------------------------------------------------------
ft_memchr busca la primera aparición de un byte específico dentro de 
un bloque de memoria. Es útil para encontrar datos en buffers de 
tamaño fijo sin necesidad de terminadores nulos.
-----------------------------------------------------------------------------------
#include <libft.h>                                            /* Se incluye la cabecera de la librería para asegurar compatibilidad con el proyecto.
const unsigned char	*ptr = (const unsigned char *)s;      /* Se convierte el puntero genérico a unsigned char para comparar byte a byte.
while (n--)                                                   /* Itera sobre los primeros 'n' bytes del bloque de memoria.
if (*ptr == (unsigned char)c)                                 /* Si el byte actual coincide con 'c', se devuelve su dirección.
ptr++;                                                        /* Avanza al siguiente byte.
return (NULL);                                                /* Si no se encuentra el byte, se devuelve NULL.
-----------------------------------------------------------------------------------
