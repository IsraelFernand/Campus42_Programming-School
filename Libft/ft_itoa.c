/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 23:10:24 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/15 01:13:00 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	get_num_len(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;

	len = get_num_len(n);
	if (n < 0)
		num = -n;
	else
		num = n;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
		str[0] = '-';
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		str[len] = '0';
	return (str);
}

-----------------------------------------------------------------------------------
ft_itoa convierte un número entero en una cadena de caracteres. 
Es útil cuando se necesita representar un número como texto, 
por ejemplo, para imprimirlo o almacenarlo en una estructura.
-----------------------------------------------------------------------------------
#include <libft.h>                 /* Se incluye la cabecera de la librería para asegurar compatibilidad con el proyecto. 
if (n < 0)                         /* Se incrementa la longitud si el número es negativo para incluir el signo '-'.
while (n / 10 != 0)                /* Se divide el número por 10 hasta que quede un solo dígito.
len = get_num_len(n);              /* Se obtiene la longitud necesaria para la cadena.
                                   /* Se maneja el caso de números negativos convirtiéndolos a positivos con una variable unsigned.
str = (char *)malloc(len + 1);     /* Se reserva memoria para la cadena incluyendo el carácter nulo.
if (!str)                          /* Se verifica si malloc devolvió NULL.
str[len--] = '\0';                 /* Se coloca el carácter nulo al final de la cadena.
if (n < 0)                         /* Si el número era negativo, se coloca el signo '-'.
                                   /* Se convierte el número en caracteres desde el final hacia el inicio de la cadena.
str[len--] = (num % 10) + '0';     /* Se extrae el último dígito y se almacena como carácter.
num /= 10;                         /* Se elimina el último dígito dividiendo por 10. 
if (n == 0)                        /* Se maneja el caso especial en el que n es 0.
return (str);                      /* Se devuelve la cadena resultante.
-----------------------------------------------------------------------------------
