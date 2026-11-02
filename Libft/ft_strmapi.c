/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:22:46 by keidruiz          #+#    #+#             */
/*   Updated: 2026/10/26 18:31:22 by keidruiz         ###   ########.fr       */
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
