/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:02:56 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:40:39 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
	{
		nptr++;
	}
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
/*
int	main(int ac, char **av)
{
		if (ac == 2)
		{
				const char	*nptr;

				nptr = av[1];
				printf("Input string: %s\n", nptr);
				printf("The result of ft_atoi is: %i\n", ft_atoi(nptr));
				printf("The result of atoi is: %i\n", atoi(nptr));

		}
		return (0);
}*/
