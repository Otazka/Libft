/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:59:49 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/26 23:04:29 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int j;

    if (!s1)
        return (NULL);
    if (!set)
        return (ft_strdup(s1));
    i = 0;
    j = (ft_strlen(s1) - 1);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (s1[i] && ft_strchr(set, s1[j]))
        j--;
    str = ft_substr(s1, i, ((j - 1) + 1));
    return (str);
}