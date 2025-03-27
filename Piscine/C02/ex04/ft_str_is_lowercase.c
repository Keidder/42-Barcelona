/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:48:54 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/08/29 14:07:07 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main()
{
	char	str1[] = "hola";
	char	str2[] = "Hola";
	char	str3[] = "";

	printf ("Esto debe de dar 1:%d\n", ft_str_is_lowercase(str1));
	printf ("Esto debe de dar 0:%d\n", ft_str_is_lowercase(str2));
	printf ("Esto debe de dar 1:%d\n", ft_str_is_lowercase(str3));
	return(0);
}*/
