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

	newlist = NULL;
	while (lst)
	{
		f(&(*lst));
		if (!(newlist = ft_lstnew((*lst).content, (*lst).content_size)))
			return (NULL);
		lst = lst->next;
	}
	return (newlist);
}
