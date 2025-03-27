/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:10:30 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:10:33 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;

	d = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*
int	main (void)
{
	char	str1[] = "Hola hombres del infierno";
	char	*str2 = strdup (str1);

	printf ("Este es el source: %s;\n y e", str1);
	printf ("dest es %s\n", ft_strdup(str2));
	printf ("Original: %s\n", str2);
	free (str2);
	return (0);
}*/
