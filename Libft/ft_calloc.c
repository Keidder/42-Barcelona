/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:02:18 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/22 21:36:08 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmp;

	if (size != 0)
	{
		if (nmemb > ULLONG_MAX / size)
			return (NULL);
	}
	tmp = malloc (nmemb * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}
/*
int	main(void)
{
	int	*arr;

	arr = ft_calloc(10, 5);
	write (1, (char *)arr, 5);
	free (arr);
	return (0);
}*/
