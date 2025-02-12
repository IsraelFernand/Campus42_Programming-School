/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:27:03 by israelfe          #+#    #+#             */
/*   Updated: 2024/12/26 17:49:55 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Inclusión de bibliotecas necesarias
# include <stddef.h> // Para size_t
# include <stdlib.h> // Para malloc, free, NULL
# include <unistd.h> // Para write

// Prototipos de funciones obligatorias
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

// Prototipos de funciones adicionales
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif

-----------------------------------------------------------------------------------
libft.h es el archivo de cabecera de la librería libft, que contiene 
declaraciones de funciones estándar de C reimplementadas, junto con algunas 
funciones adicionales de manipulación de cadenas y memoria. Se usa para 
facilitar la reutilización de código en futuros proyectos.
-----------------------------------------------------------------------------------
# include <stddef.h> // Para size_t
# include <stdlib.h> // Para malloc, free, NULL        /* Inclusión de bibliotecas estándar necesarias para las funciones implementadas
# include <unistd.h> // Para write
 
Prototipos de funciones obligatorias de la librería estándar reimplementadas
int		ft_isalpha(int c);  // Comprueba si un carácter es una letra
int		ft_isdigit(int c); // Comprueba si un carácter es un número
int		ft_isalnum(int c); // Comprueba si un carácter es alfanumérico
int		ft_isascii(int c); // Comprueba si un carácter pertenece a la tabla ASCII
int		ft_isprint(int c); // Comprueba si un carácter es imprimible
size_t	ft_strlen(const char *s); // Calcula la longitud de una cadena
void	*ft_memset(void *b, int c, size_t len); // Rellena un bloque de memoria con un valor
void	ft_bzero(void *s, size_t n); // Rellena un bloque de memoria con ceros
void	*ft_memcpy(void *dst, const void *src, size_t n); // Copia memoria de una dirección a otra
void	*ft_memmove(void *dst, const void *src, size_t len); // Copia memoria evitando solapamientos
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // Copia una cadena con seguridad
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // Concatena cadenas con seguridad
int		ft_toupper(int c); // Convierte un carácter a mayúscula
int		ft_tolower(int c); // Convierte un carácter a minúscula
char	*ft_strchr(const char *s, int c); // Busca un carácter en una cadena
char	*ft_strrchr(const char *s, int c); // Busca un carácter en una cadena desde el final
int		ft_strncmp(const char *s1, const char *s2, size_t n);  // Compara dos cadenas hasta 'n' caracteres
void	*ft_memchr(const void *s, int c, size_t n); // Busca un byte en un bloque de memoria
int		ft_memcmp(const void *s1, const void *s2, size_t n); // Compara dos bloques de memoria
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); // Busca una subcadena dentro de otra
int		ft_atoi(const char *str); // Convierte una cadena a un entero
void	*ft_calloc(size_t count, size_t size); // Asigna memoria y la inicializa a cero
char	*ft_strdup(const char *s1); // Duplica una cadena

// Prototipos de funciones adicionales que extienden las funcionalidades básicas
char	*ft_substr(const char *s, unsigned int start, size_t len); // Extrae una subcadena de una cadena
char	*ft_strjoin(const char *s1, const char *s2); // Concatena dos cadenas en una nueva
char	*ft_strtrim(const char *s1, const char *set); // Elimina caracteres específicos de los extremos de una cadena
char	**ft_split(const char *s, char c); // Divide una cadena en varias subcadenas según un delimitador
char	*ft_itoa(int n); // Convierte un entero a una cadena
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char)); // Aplica una función a cada carácter de una cadena
void	ft_striteri(char *s, void (*f)(unsigned int, char *)); // Aplica una función a cada carácter de una cadena con su índice
void	ft_putchar_fd(char c, int fd); // Escribe un carácter en un file descriptor
void	ft_putstr_fd(char *s, int fd); // Escribe una cadena en un file descriptor
void	ft_putendl_fd(char *s, int fd); // Escribe una cadena seguida de un salto de línea en un file descriptor
void	ft_putnbr_fd(int n, int fd); // Escribe un número en un file descriptor 

#endif Cierra la condición y evita que el contenido se procese más de una vez
