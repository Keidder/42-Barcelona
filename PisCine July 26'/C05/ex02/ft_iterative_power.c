/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 23:37:28 by keidruiz          #+#    #+#             */
/*   Updated: 2026/08/10 17:04:10 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		n *= nb;
		power--;
	}
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%d",ft_iterative_power(3, 3));
	return (0);
}
*/
