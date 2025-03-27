/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:37:42 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/10/23 02:10:02 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

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
/*
int	main (void)
{

	char	j[] = "hhh,,i'luciiias;;;'";
	char	*r;
	r = ft_strtrim (j,", h ; ' i ");
	printf("String recortada: %s\n", r);
	free(r);
	return (0);
}*/
