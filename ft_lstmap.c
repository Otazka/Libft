/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 01:09:43 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/27 01:10:33 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*mainh;
    t_list	*temp;
    t_list	*new;

    if (!lst)
        return (NULL);
    mainh = ft_lstnew((*f)(lst->content));
    if (!mainh)
        return (NULL);
    temp = lst->next;
    while (temp != NULL)
    {
        new = ft_lstnew((*f)(temp->content));
        if (!new)
        {
            ft_lstclear(&mainh, del);
            return (NULL);
        }
        ft_lstadd_back(&mainh, new);
        temp = temp->next;
    }
    return (mainh);
}