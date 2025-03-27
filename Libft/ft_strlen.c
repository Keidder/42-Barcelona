/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:12:57 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/09 15:48:59 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	char	hola[] = "Hola, que tal todooooooo?";

	printf ("El len de %s es %li", hola, ft_strlen(hola));
	return (0);
}*/
