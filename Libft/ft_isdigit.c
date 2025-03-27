/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:04:25 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:04:28 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*int	main(void)
{
	char	c = '2';
	char	j = 's';
	char	l = '5';
	char	x = 'g';
	
	printf ("%d\n", ft_isdigit(c));
	printf ("%d\n", ft_isdigit(j));
	printf ("%d\n", ft_isdigit(l));
	printf ("%d\n", ft_isdigit(x));
	return (0);
}*/
