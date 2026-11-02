# Libf

Este proyecto forma parte del Common Core de 42 Barcelona. El objetivo es recrear varias funciones de la biblioteca estándar de C para entender mejor cómo funcionan y aprender a trabajar con ellas desde cero.

En lugar de utilizar directamente las funciones originales, tengo que implementar mi propia versión respetando el comportamiento esperado y las restricciones del proyecto.

## ¿Qué cosas incluye?

El proyecto reúne funciones para trabajar con distintos tipos de datos:

- Caracteres: comprobar si un carácter es alfabético, numérico o imprimible, entre otras operaciones.
- Cadenas de caracteres: calcular longitudes, copiar, concatenar y buscar caracteres o subcadenas.
- Memoria: reservar, inicializar, copiar y mover bloques de memoria.
- Conversión: convertir caracteres a mayúsculas o minúsculas y transformar cadenas en números.
- Salida: escribir caracteres, cadenas y números en un descriptor de archivo.
- Listas enlazadas: crear, recorrer, modificar y liberar listas mediante estructuras dinámicas.

## Compilación

El proyecto utiliza un "Makefile" para compilar los archivos y generar la biblioteca libft.a.

Para compilarla, ejecuta:

make

También están disponibles los siguientes comandos:

make clean
make fclean
make re

Se utiliza el compilador "cc" con las opciones "-Wall -Wextra -Werror" para detectar errores y advertencias durante la compilación.

## Estructura

Los archivos están organizados por funciones. El proyecto incluye el archivo de cabecera `libft.h`, donde se declaran las funciones, y el `Makefile`, que automatiza la compilación.

Libft/
Makefile
libft.h
ft_*.c

## Objetivo

Más allá de conseguir que las funciones funcionen, este proyecto ayuda a comprender mejor los punteros, la memoria dinámica, las cadenas de caracteres y las estructuras de datos en C.

Lenguaje: C  
Compilación: Makefile

