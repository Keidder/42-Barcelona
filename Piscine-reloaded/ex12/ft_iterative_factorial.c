/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:56:12 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/12 22:17:38 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultado;
	int	i;

	resultado = 1;
	i = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (i <= nb)
	{
		resultado *= i;
		i++;
	}
	return (resultado);
}
/*
int	main(void)
{
	int	number;

	printf ("introduce un numero (se calculara su factorial)");
	scanf ("%d", &number);

	int 	factorial = ft_iterative_factorial(nb);
	if (factorial == 0 && number < 0)
	{
		printf ("Error");
	}
	else
	{
		printf ("El factorial de %d es %d\n", number, factorial);
	}
	return (0);
}*/
