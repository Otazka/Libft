/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:32:55 by elenasurovt       #+#    #+#             */
/*   Updated: 2024/06/01 11:45:57 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t a)
{
	size_t		i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (a--)
			*((unsigned char *)dst + a) = *((unsigned char *)src + a);
	}
	else
	{
		while (a--)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dst);
}
