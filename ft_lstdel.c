/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:24:27 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/31 21:28:34 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*tmp_next;

	list = *alst;
	while (list != NULL)
	{
		tmp_next = list->next;
		del(list->content, list->content_size);
		free(list);
		list = tmp_next;
	}
	*alst = NULL;
}
