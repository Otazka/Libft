/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:19:17 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/31 13:40:13 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		a;
	void		*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	a = count * size;
	p = malloc(a);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, a);
	return (p);
}