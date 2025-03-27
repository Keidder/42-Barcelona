/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:04:45 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:04:48 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
/*
int	main(void)
{
	char	i = 'k';
	char	k = 'P';
	char	l = '2';
	char	x = '\0';

	printf ("%d\n", ft_isprint(i));
	printf ("%d\n", ft_isprint(k));
	printf ("%d\n", ft_isprint(l));
	printf ("%d\n", ft_isprint(x));
	return (0);
}*/
