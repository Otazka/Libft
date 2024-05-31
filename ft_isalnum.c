/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 01:19:21 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/31 11:53:19 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	while (ft_isalpha(a) || ft_isdigit(a))
		return (1);
	return (0);
}
