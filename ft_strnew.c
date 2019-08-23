/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:08:18 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/23 22:36:32 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	if (!(s = (char *)malloc(size * sizeof(char) + 1)))
		return (NULL);
	while (size)
	{
		s[size] = '\0';
		size--;
	}
	s[0] = '\0';
	return (s);
}
