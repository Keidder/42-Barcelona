/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:16:41 by keidruiz          #+#    #+#             */
/*   Updated: 2026/10/20 18:19:33 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	const char		*last;

	if (!s)
		return (NULL);
	ch = (unsigned char)c;
	last = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == ch)
			last = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)last);
}
