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

static unsigned int	ft_number_size(int number)
{
    unsigned int	length;

    length = 0;
    if (number == 0)
        return (1);
    if (number < 0)
        length += 1;
    while (number != 0)
    {
        number /= 10;
        length++;
    }
    return (length);
}

char	*ft_itoa(int n)
{
    char		*string;
    unsigned int	number;
    unsigned int	length;

    length = ft_number_size(n);
    string = (char *)malloc(sizeof(char) * (length + 1));
    if (string == NULL)
        return (NULL);
    if (number < 0)
    {
        string[0] = '-';
        number = -n;
    }
    else
        number = n;
    if (number == 0)
        string[0] = '0';
    string[length] = '\0';
    while (number != 0)
    {
        string[length - 1] = (number % 10) + '0';
        number = number / 10;
        length--;
    }
    return (string);
}