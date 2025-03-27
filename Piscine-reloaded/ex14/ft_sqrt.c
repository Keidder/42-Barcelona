/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:47:17 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/13 19:26:51 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	test;

	test = 2;
	if (nb < 0)
		return (0);
	while (test <= nb / 2)
	{
		if (test * test == nb)
		{
			return (test);
		}
		test++;
	}
	return (0);
}

/*#include <stdio.h>
int     main()
{
    int number;
    int raiz;
    
    number = 1;
    raiz = ft_sqrt(number);
    
    if (number < 0)
    {
        return (0);
    }
    else
    {
        printf ("La raiz cuadrada de %d es %d\n", number, raiz);
    }
    return (0);
}*/
