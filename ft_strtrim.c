/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:01:48 by elsurovt          #+#    #+#             */
/*   Updated: 2024/06/01 14:23:48 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	index;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	index = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_check(s1[start], set))
		start++;
	while (end > start && ft_check(s1[end - 1], set))
		end--;
	res = (char *) malloc(sizeof(char) * (end - start + 1));
	if (res == NULL)
		return (NULL);
	s1 += start;
	while (start < end)
	{
		res[index++] = *s1++;
		start++;
	}
	res[index] = '\0';
	return (res);
}
