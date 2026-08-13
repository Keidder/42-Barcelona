/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:45:33 by keidruiz          #+#    #+#             */
/*   Updated: 2026/08/04 13:05:01 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%d\n", ft_strcmp("Hola", "Hola"));
	printf ("%d\n", ft_strcmp("hola1", "Hola"));
	printf ("%d\n", ft_strcmp("0", "Hola"));
	return (0);
}
*/
