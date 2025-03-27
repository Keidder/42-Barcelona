/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:40:13 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/17 19:23:05 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main (void)
{
	char	str1[] = "Hola hombres del infierno";
	char	str2[] = "Hola";

	printf ("Este es el source %s y esta es str2 %s\n", str1, str2);
	printf ("dest es %s\n", ft_strdup(str2));
	return (0);
}
*/
