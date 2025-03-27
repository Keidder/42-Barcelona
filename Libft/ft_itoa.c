/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:18:27 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/17 21:36:52 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*nptr;
	long		num;
	int			len;
	const char	*i_digit;

	num = (long)n;
	len = count_nbr(num);
	i_digit = "0123456789";
	nptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nptr)
		return (NULL);
	nptr[len] = '\0';
	if (num == 0)
		nptr[0] = '0';
	if (num < 0)
	{
		nptr[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		nptr[--len] = i_digit[num % 10];
		num = num / 10;
	}
	return (nptr);
}
/*
int	main(void)
{
	int	s = 2147483647;

	printf ("Antes de itoa: %d\n", s); 
	printf ("Despues de itoa: %s\n", ft_itoa(s));
	return (0); 
}
*/
