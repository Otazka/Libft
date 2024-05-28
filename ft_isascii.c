/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 02:24:33 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/26 02:28:47 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int a)
{
    if (a >= 0 && a <= 127)
        return (1);
    return (0);
}