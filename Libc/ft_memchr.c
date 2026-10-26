/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:27:40 by keidruiz          #+#    #+#             */
/*   Updated: 2026/10/21 18:33:59 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*ptr;

	i = 0;
	ptr = (unsigned const char *)s;
	while (i < n)
	{
		if (ptr[i] == ((unsigned char)c))
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
