/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:56:04 by kruiz-cu          #+#    #+#             */
/*   Updated: 2025/01/22 22:56:06 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_putchar(int character);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_print_number(int n);
int	ft_print_u(unsigned int n);
int	ft_print_hexadecimal(unsigned int num, const char word);
int	ft_print_pointer(void *ptr);

#endif
