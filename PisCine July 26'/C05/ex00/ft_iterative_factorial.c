/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:38:54 by keidruiz          #+#    #+#             */
/*   Updated: 2026/08/06 23:21:10 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	result;

	factorial = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (factorial <= nb)
	{
		result *= factorial;
		factorial++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%d", ft_iterative_factorial(5));
	return (0);
}
*/
