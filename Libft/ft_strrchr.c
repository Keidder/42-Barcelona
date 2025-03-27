/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:15:04 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/23 02:22:21 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*lw;

	lw = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			lw = (char *)s;
		}
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (lw);
}
/*
int	main(void)
{
	char	j[] = "Hola";

	printf ("String 1: %s\n", j);
	printf ("string 2: %s\n", ft_strrchr(j, 'o'));
	printf("Funcion original %s\n", strrchr(j, 'o'));
	return (0);
}*/
