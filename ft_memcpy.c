/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 03:11:46 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/26 03:17:25 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t a)
{
    size_t i;
    char *d;
    char *s;

    i = 0;
    d = (char *)dst;
    s = (char *)src;
    while (i < a)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}