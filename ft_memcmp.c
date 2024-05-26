/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 02:07:11 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/26 02:11:47 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t a)
{
    unsigned char *s1;
    unsigned char *s2;

    s1 = (unsigned char *) str1;
    s2 = (unsigned char *) str2;
    while (a > 0)
    {
        if (*s1 > *s2 || *s1 < *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
        a--;
    }
    return (0);
}