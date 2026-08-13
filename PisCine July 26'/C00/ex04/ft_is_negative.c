/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 14:39:37 by keidruiz          #+#    #+#             */
/*   Updated: 2026/07/23 14:42:53 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write (1, "P", 1);
	else
		write (1, "N", 1);
}
/*
int	main()
{
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(-12);
	ft_is_negative(11020102);
	return (0);
}
*/
