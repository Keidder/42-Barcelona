#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fds[argc - 1];
	int		all_read;
	int		i;
	char	*line;

	if (argc < 2)
	{
		printf("Uso: %s <archivo1> <archivo2> ... <archivoN>\n", argv[0]);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		fds[i - 1] = open(argv[i], O_RDONLY);
		if (fds[i - 1] < 0)
		{
			printf("Error");
			return (1);
		}
		i++;
	}
	all_read = 0;
	while (!all_read)
	{
		all_read = 1;
		i = 0;
		while (i < (argc - 1))
		{
			line = get_next_line(fds[i]);
			if (line)
			{
				printf("[archivo %d]: (%s): %s", fds[i], argv[i + 1], line);
				free(line);
				all_read = 0;
			}
			i++;
		}
	}
	i = 0;
	while (i < (argc - 1))
	{
		close(fds[i]);
		i++;
	}
	return (0);
}
