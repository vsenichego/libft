/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:43:18 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/18 23:30:47 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!(node->content = (t_list *)malloc(sizeof(t_list) * content_size)))
	{
		free(node);
		return (NULL);
	}
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		node->content = (void *)content;
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
