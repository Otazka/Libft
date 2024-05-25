/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:09:05 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/25 23:20:13 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int a)
{
    int len;
    char *tmp;

    tmp = (char *)str;
    len = ft_strlen(str);
    if (a == '\0')
        return (tmp +len);
    while (len >= 0)
    {
        if(tmp[len] == (char)a)
            return (tmp + len);
        len--;
    }
    return (0);
}