/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 02:34:28 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/26 02:37:04 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int a, size_t b)
{
    size_t i;
    s = (unsigned char *) str;
    while (i < b)
    {
        s[i] = (unsigned char)a;
        i++;
    }
    return (s);
}