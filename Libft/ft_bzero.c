/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:11 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/15 00:15:27 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = 0;
	}
}

-----------------------------------------------------------------------------------
ft_bzero establece en 0 los primeros 'n' bytes de un bloque de memoria 
apuntado por 's'. Se utiliza comúnmente para inicializar estructuras 
de datos o buffers en programas que requieren valores nulos.
-----------------------------------------------------------------------------------
#include <libft.h>                 /* Se incluye la cabecera de la librería para asegurar compatibilidad con el proyecto.
ptr = (unsigned char *)s;          /* Se convierte el puntero genérico a un puntero de tipo unsigned char.
while (n--)                        /* Se itera hasta completar 'n' bytes.
*ptr++ = 0;                        /* Se asigna el valor 0 al byte actual y se avanza al siguiente.
-----------------------------------------------------------------------------------
