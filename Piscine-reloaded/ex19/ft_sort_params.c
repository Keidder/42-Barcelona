/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:39:33 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/17 19:09:06 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <unistd.h>

void	ft_putchar(char c);
/*{
	write (1, &c, 1);
}*/

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	j;

	j = 0;
	while (str1[j] && str2[j] != '\0' && str1[j] == str2[j])
	{
		j++;
	}
	return (str1[j] - str2[j]);
}

int	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar (argv[j][i]);
			i++;
		}
		ft_putchar ('\n');
		j++;
	}
	return (0);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		j;
	char	*temp;
	int		i;

	if (argc < 2)
	{
		return ;
	}
	i = -1;
	while (++i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
	}
}

int	main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
