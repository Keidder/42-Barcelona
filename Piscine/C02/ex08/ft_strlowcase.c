/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:38:18 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/08/29 19:44:04 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "HOLA :D";
	char	str2[] = "HOLAAA!!!";

	printf ("Esto es antes:%s\n", str1);
	printf ("Esto es despues:%s\n", ft_strlowcase(str2));
	return (0);
}*/
