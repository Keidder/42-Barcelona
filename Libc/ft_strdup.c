/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:49:08 by keidruiz          #+#    #+#             */
/*   Updated: 2026/10/21 18:49:43 by keidruiz         ###   ########.fr       */
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
