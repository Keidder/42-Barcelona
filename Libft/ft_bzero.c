/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:01:45 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:02:05 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = '\0';
	}
}
/*
int	main(void)
{
	char	h[] = "Hola, que tal?";

	printf ("Antes (%s)\n", h);
	ft_bzero(h, 5);
	write (1, h, sizeof(h));
	return (0);
}*/
