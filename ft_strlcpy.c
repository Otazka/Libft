/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 01:25:43 by elsurovt          #+#    #+#             */
/*   Updated: 2024/06/01 11:47:08 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t		i;
	size_t		len_src;

	len_src = ft_strlen(src);
	i = 0;
	if (siz == 0)
		return (len_src);
	while (((siz - 1) > i) && (*(src + i) != '\0'))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (len_src);
}
