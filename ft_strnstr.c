/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:31:06 by elsurovt          #+#    #+#             */
/*   Updated: 2024/06/01 11:48:12 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		length;
	char	*b;
	char	*l;

	b = (char *) big;
	l = (char *) little;
	if (*l == '\0')
		return (b);
	if (len == 0)
		return (0);
	i = 0;
	length = ft_strlen(l);
	while (b[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((b + i), l, length) == 0)
			return (b + i);
		i++;
	}
	return (NULL);
}
