/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 01:38:13 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/26 02:02:06 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t len_dst;
    size_t len_src;
    size_t a;
    size_t b;

    if ((dst == NULL) && (dstsize == 0))
        return (0);
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (dstsize < len_dst)
        return (ft_strlen(src) + dstsize);
    i = 0;
    a  = dstsize - len_dst;
    b = len_dst + len_src;
    while (((i + 1) < n) && (*(src + i) != '\0'))
    {
        *(dest + (len_dst + i)) = *(src + i);
        i++;
    }
    *(dst + (len_dst + i)) = '\0';
    return (b);
}