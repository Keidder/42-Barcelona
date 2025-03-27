/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:01:06 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/19 19:00:09 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024

int	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	return (0);
}

void	display_error(char *message)
{
	ft_putstr(message);
}

int	open_files(char *filename)
{
	return (open(filename, O_RDONLY));
}

void	read_and_display(int fd)
{
	char	buf[BUF_SIZE];
	int		bytes_read;

	while (1)
	{
		bytes_read = read(fd, buf, BUF_SIZE);
		if (bytes_read < 0)
		{
			display_error("Cannot read file.\n");
			close(fd);
			return ;
		}
		else if (bytes_read == 0)
			break ;
		write (1, buf, bytes_read);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		display_error ("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		display_error ("Too many arguments.\n");
		return (1);
	}
	fd = open_files (argv[1]);
	if (fd < 0)
	{
		display_error ("Cannot read file.\n");
		return (1);
	}
	read_and_display(fd);
	close(fd);
	return (0);
}
