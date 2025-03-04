EN - 🎯The printf project consists of creating our own version of the printf() function, which is used to display text and values on the screen. Instead of using the standard C function, we must program it from scratch, ensuring that it can handle different data types such as characters, strings, integers, and memory addresses.

To achieve this, the program must analyze the given text, detect special formats like %d for numbers or %s for strings, and replace them with the corresponding values. Additionally, we will learn to work with functions that allow receiving a variable number of arguments.

The goal is to make our function work similarly to the original, ensuring that the code is efficient, well-structured, and meets the standards set in the project.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ES - 🎯 El proyecto printf consiste en crear una versión propia de la función printf(), que se usa para mostrar texto y valores en la pantalla. En lugar de utilizar la función estándar de C, debemos programarla desde cero, asegurándonos de que pueda manejar diferentes tipos de datos como caracteres, cadenas, números enteros y direcciones de memoria.

Para lograrlo, el programa debe analizar el texto que se le pasa, detectar los formatos especiales como %d para números o %s para cadenas, y reemplazarlos por los valores correspondientes. Además, aprenderemos a trabajar con funciones que permiten recibir un número variable de argumentos.

El objetivo es hacer que nuestra función funcione de manera similar a la original, asegurando que el código sea eficiente, estructurado y cumpla con las normas establecidas en el proyecto.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Archivos que debemos crear para completar el ejercicio. 

| Archivos creados  | ¿Porque |
|-------------|---------------------------------------------------|
|ft_printf.c  | (archivo principal donde definiremos la función)|
|ft_printf.h  | (header con los prototipos de las funciones y macros necesarias)|
|Makefile     |  (para compilar la librería)|
|ft_putchar.c | dfsdggsdgdfg |
|ft_putnbr.c  | dsfjskdjdfjs |
|ft_putstr.c  | sdfghdfgdsgs |
|ft_strlen.c  | dfggdgdfhdfh |
|ft_punt_hexa.c |dsfsdgdfsgdsgd |
|ft_hexa_mayus.c |dfsdhjfga |
|ft_hexa_min.c |dfsdgsdgdf |
|ft_num_nosign.c | fsfsdhjfg |


Se deben implementar las siguientes conversiones:

| Funcion | Descripción |
|-----|--------------------------|
| %c	| Imprime un solo carácter |
| %s	| Imprime una string (como se define por defecto en C) |
| %p	| El puntero void * dado como argumento se imprime en formato hexadecimal |
| %d	| Imprime un número decimal (base 10) |
| %i	| Imprime un entero en base 10 |
| %u	| Imprime un número decimal (base 10) sin signo |
| %x	| Imprime un número hexadecimal (base 16) en minúsculas |
| %X	| Imprime un número hexadecimal (base 16) en mayúsculas |
| %%	| Imprime el símbolo del porcentaje |

La función printf retorna el número de caracteres impresos, o un valor negativo si ocurre un error.

Funciones autorizadas : 

| Función   | Descripción |
|-----------|--------------------------------------------------|
| malloc    | Pide un espacio en la memoria para guardar algo. |
| free      | Borra el espacio que pediste con malloc para que no se desperdicie. |
| write     | Escribe algo en la pantalla o en un archivo. |
| va_start  | Prepara una lista de argumentos opcionales. |
| va_arg    | Saca el siguiente dato extra de la lista. |
| va_copy   | Copia la lista de datos extra para usarla dos veces. |
| va_end    | Termina y limpia la lista de datos extra. |
