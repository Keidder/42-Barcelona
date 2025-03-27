/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:03:04 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/08 20:03:29 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int	main()
{
	char	c = '1';
	char	h = 'l';
	char	j = 'l';
	char	l = '2';
	
	printf ("%d\n", ft_isalpha(c));
	printf ("%d\n", ft_isalpha(h));
	printf ("%d\n", ft_isalpha(j));
	printf ("%d\n", ft_isalpha(l));
	return (1);
}*/
