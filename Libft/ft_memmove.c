/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:16:46 by keidruiz          #+#    #+#             */
/*   Updated: 2026/10/21 18:27:21 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (!src || !dest)
		return (NULL);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	return (d);
}

/*
int	main(void)
{
	char	s[] = "Hola";
	char	d[] = "mundo";
	size_t	size = 3;
	char	*r;

	r = (char *)ft_memmove(d, s, size);
	printf ("memmove: %s", d);
	return (0);
}*/
