/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:42:06 by keidruiz          #+#    #+#             */
/*   Updated: 2026/11/02 18:05:25 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (j < len - i && big[i + j]
			&& little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*big = "pen penta pentago pentagono";
	char	*little = "pentago";
	char	*resultado;

	resultado = ft_strnstr(big, little, 30);

	if (resultado != NULL)
		printf ("Subcadena encontrada: %s\n", resultado);
	else
		printf ("Subcadena no encontrada\n");
	return (0);
}*/
