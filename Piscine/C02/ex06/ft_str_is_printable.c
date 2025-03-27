/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:08:24 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/08/29 21:48:51 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
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
	char	str1[] = "Hoal][-";
        char    str2[] = "\t";
        char    str3[] = "";

        printf ("Esto debe de dar 1:%d\n", ft_str_is_printable(str1));
        printf ("Esto debe de dar 0:%d\n", ft_str_is_printable(str2));
        printf ("Esto debe de dar 1:%d\n", ft_str_is_printable(str3));
        return(0);
}*/
