/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:22:54 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/06 13:58:01 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	char	*hs;
	char	*nd;

	i = ft_strlen(needle);
	hs = (char *)haystack;
	nd = (char *)needle;
	if (*nd == '\0')
		return (hs);
	while (*hs)
	{
		if (!(ft_memcmp(hs++, nd, i)))
			return (hs - 1);
	}
	return (0);
}
