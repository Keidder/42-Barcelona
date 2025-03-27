/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcela-ga <fcela-ga@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:20:06 by fcela-ga          #+#    #+#             */
/*   Updated: 2024/11/27 01:46:32 by fcela-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "carlota/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	// Imprimir el valor de BUFFER_SIZE definido
	#ifdef BUFFER_SIZE
		printf("Using BUFFER_SIZE = %d\n", BUFFER_SIZE);
	#else
		printf("BUFFER_SIZE is not defined.\n");
	#endif

	if (argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return (1);
	}

	// Verificar archivos específicos
	printf("\nTesting file: %s\n", argv[1]);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening file\n");
		return (1);
	}

	// Leer archivo línea por línea
	while ((line = get_next_line(fd)))
	{
		if(line == NULL)
			printf("Error NULL");
		printf("%s", line);
		free(line);
	}
	close(fd);

	// Prueba con archivo binario
	/*
	printf("\nTesting with binary file...\n");
	fd = open("binary_file.bin", O_RDONLY);
	if (fd != -1)
	{
		while ((line = get_next_line(fd)))
		{
			printf("%s", line);
			free(line);
		}
		close(fd);
	}
	*/

	/* Prueba con stdin
	printf("\nTesting with stdin (type 'exit' to quit):\n");
	while ((line = get_next_line(0)))
	{
		printf("Line read: %s", line);
		if (strncmp(line, "exit\n", 5) == 0)
		{
			free(line);
			break ;
		}
		free(line);
	}*/
	return (0);
}
