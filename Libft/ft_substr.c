/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:33:57 by keidruiz          #+#    #+#             */
/*   Updated: 2026/10/26 17:43:36 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*pointer;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	pointer = ft_calloc(len + 1, sizeof(char));
	if (!pointer)
		return (NULL);
	i = 0;
	while (i < len)
	{
		pointer[i] = s[start + i];
		i++;
	}
	return (pointer);
}
