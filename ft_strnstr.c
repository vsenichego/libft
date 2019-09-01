/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:23:53 by smarcos           #+#    #+#             */
/*   Updated: 2019/09/01 17:12:41 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	if (*needle == '\0')
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	while (*haystack != '\0' && nlen <= len--)
	{
		if ((haystack[0] == needle[0]) && (ft_strncmp(haystack, needle, nlen)
				== 0))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
