/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:13:50 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/23 01:33:05 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				count;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	count = 0;
	if (n == 0)
		return (0);
	while (str1[count] && str2[count] && (count < n - 1))
	{
		if (str1[count] != str2[count])
			return (str1[count] - str2[count]);
		count++;
	}
	return (str1[count] - str2[count]);
}
/*
int	main(void)
{
	char	s1[] = "abcdefgh";
	char	s2[] = "abcdwxyz";

	printf ("La comparacion es %i", ft_strncmp(s1, s2, 4));
	return (0);
}*/
