/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:38:42 by shimi-be          #+#    #+#             */
/*   Updated: 2024/08/11 12:38:48 by shimi-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	top_line(int x);
void	empty_line(int x);
void	bottom_line(int x);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x > 0 && y > 0)
	{
		a = 0;
		b = 1;
		top_line(x);
		while (b < y - 1)
		{
			empty_line(x);
			b++;
		}
		if (y > 1)
			bottom_line(x);
	}
}

void	empty_line(int x)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	ft_putchar('*');
	while (a < x - 1)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
	{
		a = 1;
		ft_putchar('*');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	top_line(int x)
{
	int	a;

	a = 1;
	ft_putchar('/');
	while (a < x - 1)
	{
		ft_putchar('*');
		a++;
	}
	if (x == 1)
		ft_putchar('\n');
	else
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	bottom_line(int x)
{
	int	a;

	if (x == 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
	else
	{
		a = 1;
		ft_putchar('\\');
		while (a < x - 1)
		{
			ft_putchar('*');
			a++;
		}
		ft_putchar('/');
		ft_putchar('\n');
	}
}
