/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 17:43:12 by keidruiz          #+#    #+#             */
/*   Updated: 2026/08/11 20:41:41 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%d\n", ft_fibonacci(-1));
	printf ("%d\n", ft_fibonacci(0));
	printf ("%d\n", ft_fibonacci(1));
	printf ("%d\n", ft_fibonacci(2));
	printf ("%d\n", ft_fibonacci(3));
	printf ("%d\n", ft_fibonacci(4));
	printf ("%d\n", ft_fibonacci(5));
	printf ("%d\n", ft_fibonacci(6));
	return (0);
}
*/
