/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 15:47:43 by keidruiz          #+#    #+#             */
/*   Updated: 2026/08/05 20:27:29 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	len_base(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	check_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (len_base(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_len;

	n = nbr;
	if (!check_valid_base(base))
		return ;
	if (n == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	base_len = len_base(base);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	ft_putchar(base[n % base_len]);
}
/*
int	main(void)
{
	char	*base_hexadecimal = "0123456789ABCDEF";
	char	*base_binaria = "01";
	char	*base_decimal = "0123456789";
	char	*base_octal = "01234567";

	ft_putnbr_base(6224, base_hexadecimal);
	write (1, "\n", 1);
	ft_putnbr_base(100, base_octal);
	write (1, "\n", 1);
	ft_putnbr_base(6032, base_decimal);
	write (1, "\n", 1);
	ft_putnbr_base(12312, base_binaria);
	write (1, "\n", 1);
}
*/
