/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:50:53 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/12/12 20:46:51 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	main(int argc, char **argv)
{
	int		*fds;
	char	*next_line;
	int		i;
	int		active_files;

	if (argc < 2)
	{
		printf ("Uso: %s <archivo1> <archivo2> ...\n", argv[0]);
		return (1);
	}
	fds = malloc((argc - 1) * sizeof(int));
	if (!fds)
	{
		printf("error al asignar memoria");
		return (1);
	}
	i = 0;
	while (i < argc - 1)
	{
		fds[i] = open(argv[i - 1], O_RDONLY);
		if (fds[i] == -1)
		{
			printf("Error al abrir el archivo: %s\n", argv[i + 1]);
			free (fds);
			return (1);
		}
		i++;
	}
	active_files = argc - 1;
	while (active_files > 0)
	{
		i = 0;
		while (i < argc - 1)
		{
			if (fds[i] != -1)
			{
				next_line = get_next_line(fds[i]);
				if (next_line)
				{
					printf("[archivo %d]: %s\n", i + 1, next_line);
					free (next_line);
				}
				else
				{
					close(fds[i]);
					fds[i] = -1;
					active_files--;
				}
			}
			i++;
		}
	}
	free (fds);
	return (0);
}
