/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:06:38 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/21 22:15:05 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	char	*ptr;
	size_t	i;
	char	*d;

	ptr = (char *)src;
	i = 0;
	d = (char *)dest;
	while (i < n)
	{
		d[i] = ptr[i];
		i++;
	}
	return ((void *)d);
}
