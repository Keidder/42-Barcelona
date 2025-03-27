/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:54:48 by kruiz-cu          #+#    #+#             */
/*   Updated: 2025/01/24 20:21:25 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_length_pointer(unsigned long ptr);

static void	ft_search_pointer(unsigned long ptr);

int	ft_print_pointer(void *ptr)
{
	int		size;

	size = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	size += ft_putstr("0x");
	if (ptr == 0)
		size += ft_putchar('0');
	else
	{
		ft_search_pointer((unsigned long)ptr);
		size += ft_length_pointer((unsigned long)ptr);
	}
	return (size);
}

static int	ft_length_pointer(unsigned long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		return (1);
	while (ptr > 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

static void	ft_search_pointer(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_search_pointer(ptr / 16);
		ft_search_pointer(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
}
