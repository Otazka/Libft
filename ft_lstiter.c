/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenasurovtseva <elenasurovtseva@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 01:06:27 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/31 12:11:03 by elenasurovt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = lst;
	while (temp != NULL)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
