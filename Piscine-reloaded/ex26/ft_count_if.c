/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 05:40:57 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/18 09:03:56 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}
/*
#include <stdlib.h>

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
			i++;
	}
	return (count);
}*/
