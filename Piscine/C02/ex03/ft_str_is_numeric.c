/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 05:39:18 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/08/29 19:45:24 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '1' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int     main()
{
        char    str1[] = "12hola";
	char	str2[] = "12345";

        printf("Esto deberia dar 0:%d\n", ft_str_is_numeric(str1));
        printf("Esto deberia de dar 1:%d\n", ft_str_is_numeric(str2));
        return (0);
}*/
