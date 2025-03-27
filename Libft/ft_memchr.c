/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:05:54 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:23:36 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;
	size_t				i;

	ptr = ((unsigned const char *)s);
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ((unsigned char)c))
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "Hola, que tal";
	char	*s1;
	size_t	size = 5;

	s1 = ft_memchr(s, 'o', size);
	printf ("Prototipo: %s\n", s1);
	printf ("Original: %s\n", (char *)memchr(s, 'o', size));
	return (0);
}*/
