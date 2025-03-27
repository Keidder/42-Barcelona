/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:09:01 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:09:05 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = ((unsigned char)c);
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "Hola, que tal";

	ft_memset(str, ';', 5);
	printf ("%s\n", str);
	return (0);
}*/
