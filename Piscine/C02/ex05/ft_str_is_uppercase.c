/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:08:07 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/08/29 14:14:34 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
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
	char	str1[] = "HOLA";
        char    str2[] = "Hola";
        char    str3[] = "";

        printf ("Esto debe de dar 1:%d\n", ft_str_is_uppercase(str1));
        printf ("Esto debe de dar 0:%d\n", ft_str_is_uppercase(str2));
        printf ("Esto debe de dar 1:%d\n", ft_str_is_uppercase(str3));
        return(0);
}*/
