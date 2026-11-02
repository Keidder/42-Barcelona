/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keidruiz <keidruiz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:13:16 by keidruiz          #+#    #+#             */
/*   Updated: 2026/10/26 18:15:18 by keidruiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_len;
	char	*trimmed;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	s1_len = ft_strlen(s1);
	while (i < s1_len && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while ((s1_len - 1) > i && ft_strchr(set, s1[s1_len -1]))
	{
		s1_len--;
	}
	trimmed = (char *)malloc(sizeof(char) * (s1_len + 1 - i));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, &s1[i], s1_len - i + 1);
	return (trimmed);
}
