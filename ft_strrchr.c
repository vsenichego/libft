/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:22:07 by smarcos           #+#    #+#             */
/*   Updated: 2019/07/25 14:16:18 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ps;
	char ch;
	char *res;

	ps = (char *)s;
	ch = (char)c;
	res = ps;
	while (*ps)
	{
		if (*ps == ch)
			res = ps;
		ps++;
	}
	if (*ps == '\0' && ch == '\0')
		return (ps);
	else if (*res == ch)
		return (res);
	else
		return (NULL);
}
