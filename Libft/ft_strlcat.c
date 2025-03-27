/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:11:36 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:12:07 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	i = 0;
	while (dst_len + i < size - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	source[] = "que tal?";
	char	dest[] = "Hola, ";
	size_t	sizee = 4;

	printf("Antes de concatenar: %s\n", dest);
	ft_strlcat (dest, source, sizee);
	printf("Despues de concatenar: %s\n", dest);
	int ver = (int)ft_strlcat(dest, source, sizee);
	printf("%i", ver);
	return (0);
}*/
