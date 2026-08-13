/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 21:51:25 by keidruiz          #+#    #+#             */
/*   Updated: 2026/08/13 19:01:47 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	test;

	test = 2;
	if (nb < 0)
		return (0);
	while (test <= nb)
	{
		if (test * test == nb)
			return (test);
		test++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf ("%d", ft_sqrt(4));
	return (0);
}
