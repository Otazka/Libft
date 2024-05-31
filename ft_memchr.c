/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 02:17:11 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/31 13:42:06 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int a, size_t b)
{
	unsigned char	*s;

	s = (unsigned char *) str;
	while (b > 0)
	{
		if (*s == (unsigned char)a)
			return (s);
		s++;
		b--;
	}
	return (NULL);
}