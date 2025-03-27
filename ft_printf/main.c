/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:15:39 by kruiz-cu          #+#    #+#             */
/*   Updated: 2025/01/23 18:24:41 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main(void)
{
    int size;

    // Prueba de caracteres
    size = ft_printf("Caracter: %c\n", 'A');
    printf("Bytes escritos: %d\n", size);

    // Prueba de cadenas
    size = ft_printf("Cadena: %s\n", "Hola mundo!");
    printf("Bytes escritos: %d\n", size);

    // Prueba de punteros
    char *ptr;
    ptr = NULL;
    size = ft_printf("Puntero: %p\npuntero NULL: %p\n", ptr, NULL);
    printf("Bytes escritos: %d\n", size);

    // Prueba de enteros con signo
    size = ft_printf("Entero positivo: %d\n", 1213131341);
    printf("Bytes escritos: %d\n", size);

    size = ft_printf("Entero negativo: %i\n", -67890);
    printf("Bytes escritos: %d\n", size);

    // Prueba de enteros sin signo
    size = ft_printf("Entero sin signo: %u\n", 42949);
    printf("Bytes escritos: %d\n", size);

    // Prueba de hexadecimal en minúsculas
    size = ft_printf("Hexadecimal (minúsculas): %x\n", 373592812);
    printf("Bytes escritos: %d\n", size);

    // Prueba de hexadecimal en mayúsculas
    size = ft_printf("Hexadecimal (mayúsculas): %X\n", 3735928);
    printf("Bytes escritos: %d\n", size);

    // Prueba de cadena nula
    size = ft_printf("Cadena nula: %s\n", "NULL");
    printf("Bytes escritos: %d\n", size);

////////////////////////////////////////////////////////////////////////////
	printf("Aqui empieza la prueba con el printf original.\n\n");

    // Prueba de caracteres
    size = printf("Caracter: %c\n", 'A');
    printf("Bytes escritos: %d\n", size);

    // Prueba de cadenas
    size = printf("Cadena: %s\n", "Hola mundo!");
    printf("Bytes escritos: %d\n", size);

    // Prueba de punteros
    size = printf("Puntero: %p\npuntero NULL: %p\n", ptr, NULL);
    printf("Bytes escritos: %d\n", size);

    // Prueba de enteros con signo
    size = printf("Entero positivo: %d\n", 1213131341);
    printf("Bytes escritos: %d\n", size);

    size = printf("Entero negativo: %i\n", -67890);
    printf("Bytes escritos: %d\n", size);

    // Prueba de enteros sin signo
    size = printf("Entero sin signo: %u\n", 42949);
    printf("Bytes escritos: %d\n", size);

    // Prueba de hexadecimal en minúsculas
    size = printf("Hexadecimal (minúsculas): %x\n", 373592812);
    printf("Bytes escritos: %d\n", size);

    // Prueba de hexadecimal en mayúsculas
    size = printf("Hexadecimal (mayúsculas): %X\n", 3735928);
    printf("Bytes escritos: %d\n", size);

    // Prueba de cadena nula
    size = printf("Cadena nula: %s\n", "NULL");
    printf("Bytes escritos: %d\n", size);

    return 0;
}

