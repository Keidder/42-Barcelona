/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basics.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:21:04 by kruiz-cu          #+#    #+#             */
/*   Updated: 2025/01/22 22:58:21 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int character)
{
	if (write(1, &character, 1) == -1)
		return (-1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	size;

	size = 0;
	if (str == 0)
	{
		return (ft_putstr("(null)"));
	}
	while (str[size])
	{
		size += ft_putchar(str[size]);
	}
	return (size);
}

int	ft_print_number(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_putchar('0');
	if (n == -2147483648)
	{
		size += ft_putstr("-2147483648");
		return (size);
	}
	if (n < 0)
	{
		size += ft_putchar('-');
		n = -n;
	}
	if (n > 0)
		size += ft_print_u((unsigned int)n);
	return (size);
}

int	ft_print_u(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_putchar('0');
	else
	{
		if (n / 10 != 0)
			ft_print_u(n / 10);
		ft_putchar((n % 10) + '0');
		while (n > 0)
		{
			n /= 10;
			size++;
		}
	}
	return (size);
}
