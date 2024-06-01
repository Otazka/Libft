/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:01:48 by elsurovt          #+#    #+#             */
/*   Updated: 2024/06/01 14:18:28 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	char *str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1] && j > i))
			j--;
		str = (char *)calloc(sizeof(char) * (j - i +1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i +1);
	}
	return (str);
}