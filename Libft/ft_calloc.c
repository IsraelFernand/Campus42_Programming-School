/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:53:28 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/15 00:29:31 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	unsigned char	*ptr;
	size_t			i;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	ptr = (unsigned char *)malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

/*-----------------------------------------------------------------------------------
* ft_calloc asigna memoria para un número de elementos, inicializándola en 0. 
* Es útil para evitar basura en memoria al reservar espacio dinámicamente, 
* asegurando que los datos comiencen con valores nulos.
* -----------------------------------------------------------------------------------
* #include <libft.h>                                       Se incluye la cabecera de la librería para asegurar compatibilidad con el proyecto.
* total_size = count * size;                               Se calcula el tamaño total de la memoria a reservar.
* if (count != 0 && total_size / count != size)            Se verifica un posible desbordamiento en la multiplicación.
* 		return (NULL);
* 
* ptr = (unsigned char *)malloc(total_size);               Se reserva la memoria con malloc.
* 	if (!ptr)                                          Se verifica si malloc devolvió NULL por falta de memoria. 
* 		return (NULL);
* while (i < total_size)                                   Se inicializa toda la memoria en 0. 
* return ((void *)ptr);                                    Se devuelve el puntero a la memoria reservada.
* ----------------------------------------------------------------------------------- *\
