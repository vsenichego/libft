/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:23:53 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/23 22:13:32 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	nlen;

	if (!(*haystack))
		return (0);
	if ((nlen = ft_strlen(needle)) == 0)
		return ((char *)haystack);
	i = 0;
	while (i <= (int)(len - nlen))
	{
		if ((haystack[0] == needle[0]) && (ft_strncmp(haystack, needle, nlen)
				== 0))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (0);
}
