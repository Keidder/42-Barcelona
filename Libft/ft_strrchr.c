/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:16:41 by keidruiz          #+#    #+#             */
/*   Updated: 2026/11/02 18:11:05 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lw;

	lw = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			lw = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (lw);
}
/*
int	main()
{
	char	*s = "Holaaals";
	printf ("%s", ft_strrchr(s, 'a'));
	return (0);
}
*/
