/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:54:34 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/12/12 17:09:17 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		count;
	char	*next_line;

	count = 0;
	fd = open("main.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error al abrir el archivo");
		return (1);
	}
	while ((next_line = get_next_line(fd)) != NULL)
	{
		printf("[%d]: %s\n", count, next_line);
		count++;
		free (next_line);
	}
	close(fd);
	return (0);
}
