/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:22:59 by kruiz-cu          #+#    #+#             */
/*   Updated: 2025/01/23 18:13:45 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_args(va_list argument, const char word);

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	argument;

	i = 0;
	size = 0;
	va_start(argument, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			size += ft_args(argument, str[i + 1]);
			i++;
		}
		else
			size += ft_putchar(str[i]);
		i++;
	}
	va_end(argument);
	return (size);
}

static int	ft_args(va_list argument, const char word)
{
	int	size;

	size = 0;
	if (word == 'c')
		size += ft_putchar(va_arg(argument, int));
	else if (word == 's')
		size += ft_putstr(va_arg(argument, char *));
	else if (word == 'p')
		size += ft_print_pointer(va_arg(argument, void *));
	else if (word == 'd' || word == 'i')
		size += ft_print_number(va_arg(argument, int));
	else if (word == 'u')
		size += ft_print_u(va_arg(argument, unsigned int));
	else if (word == 'x' || word == 'X')
		size += ft_print_hexadecimal(va_arg(argument, unsigned int), word);
	else
		size += ft_putchar(word);
	return (size);
}
