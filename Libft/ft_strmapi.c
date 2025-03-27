/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:36:08 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/17 19:49:37 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*str;

	i = 0;
	s_len = ft_strlen(s);
	if (!s | !f)
		return (0);
	str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!str)
		return (NULL);
	while (i < s_len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	toupperr(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_toupper(c));
}

int	main(void)
{
	char	*s = "Hello World";
	char	*result;

	result = ft_strmapi(s, toupperr);
	printf ("Strmapi: %s\n", result);
	free(result);
	return (0);
}*/
