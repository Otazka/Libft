/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:22:19 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/26 23:36:19 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
    size_t	i;

    i = 1;
    while (n /= 10)
        i++;
    return (i);
}

char			*ft_itoa(int n)
{
    char		*str_num;
    size_t		digits;
    long int	num;

    num = n;
    digits = get_digits(n);
    if (n < 0)
    {
        num *= -1;
        digits++;
    }
    if (!(str_num = (char *)malloc(sizeof(char) * (digits + 1))))
        return (NULL);
    *(str_num + digits) = 0;
    while (digits--)
    {
        *(str_num + digits) = num % 10 + '0';
        num = num / 10;
    }
    if (n < 0)
        *(str_num + 0) = '-';
    return (str_num);
}