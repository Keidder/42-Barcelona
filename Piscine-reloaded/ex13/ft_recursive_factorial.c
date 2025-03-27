/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:18:43 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/16 11:58:02 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	nbr = 5;

	if (nbr < 0 || nbr > 12)
	{
	printf("Error");
	}
	else
	{
	printf ("El factorial es %d", ft_recursive_factorial(nbr));
	}
	return (0);
}*/
