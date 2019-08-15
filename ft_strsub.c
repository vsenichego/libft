/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:17:46 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/15 19:42:59 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	subs = ft_strnew(len);
	if (!subs)
		return (NULL);
	i = 0;
	while (len)
	{
		subs[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (subs);
}
