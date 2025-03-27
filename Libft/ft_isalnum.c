/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:02:45 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:02:48 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9')))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*int	main(void)
{
	char	i = 'k';
	char	k = 'P';
	char	l = '2';
	char	x = '\0';

	printf ("%d\n", ft_isalnum(i));
	printf ("%d\n", ft_isalnum(k));
	printf ("%d\n", ft_isalnum(l));
	printf ("%d\n", ft_isalnum(x));
	return (0);
}*/
