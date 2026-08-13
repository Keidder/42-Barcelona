/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 21:36:49 by keidruiz          #+#    #+#             */
/*   Updated: 2026/07/27 21:52:13 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
#include <stdio.h>

int		main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	int i;

	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf ("%d,", tab[i]);
		i++;
	}
	return (0);
}
*/
