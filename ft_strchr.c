/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:21:12 by smarcos           #+#    #+#             */
/*   Updated: 2019/07/25 13:21:44 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ps;
	char ch;

	ps = (char *)s;
	ch = (char)c;
	while (*ps)
	{
		if (*ps == ch)
			return (ps);
		ps++;
	}
	if (*ps == ch)
		return (ps);
	else
		return (NULL);
}
