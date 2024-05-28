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

void *ft_memset(void *str, int a, size_t len)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *) str;
    while (i < len)
        ptr[i++] = (unsigned char)a;
    return (str);
}