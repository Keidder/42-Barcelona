/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:03:58 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/10 18:50:24 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*int	main (void)
{
	char	c = 127;
	int	x = 128;

	printf ("Es un caracter ASCII %d\n", ft_isascii(c));
	printf ("No es un caracter ASCII %d\n", ft_isascii(x));
	return (0);
}*/
