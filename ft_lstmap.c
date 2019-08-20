/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:21:45 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/19 21:22:39 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
    t_list  *tmp;

    tmp = f(lst);
    newlist = tmp;
    while (lst->next != NULL)
    {
        lst = lst->next;
        tmp->next = f(lst);
        tmp = tmp->next;
    }
	return (newlist);
}
