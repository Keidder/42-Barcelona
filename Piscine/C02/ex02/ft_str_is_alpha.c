/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:12:38 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/08/28 05:38:18 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || \
					(str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "ksjalslk";

	printf ("Esto deberia dar la sentence:%s\n", str1);
	int a = ft_str_is_alpha(str1);
	printf ("esto deberia dar 0:%d\n", a);
	return (0);
}*/
