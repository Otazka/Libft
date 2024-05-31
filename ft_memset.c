/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 02:34:28 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/31 12:22:44 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int a, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) str;
	while (i < len)
		ptr[i++] = (unsigned char)a;
	return (str);
}
