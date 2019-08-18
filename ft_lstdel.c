/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:24:27 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/18 22:40:23 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while ((*alst++)->next != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		alst++;
	}
	ft_lstdelone(alst, del);
}
