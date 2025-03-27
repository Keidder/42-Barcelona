/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:25:49 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/13 20:57:45 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hola";

	printf ("La longitud de %s es %d", str1, ft_strlen(str1));
	return (0);
}*/	
