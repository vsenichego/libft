/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:14:14 by smarcos           #+#    #+#             */
/*   Updated: 2019/07/11 19:18:05 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			res;

	i = 0;
	res = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (i < n)
	{
		res = ps1[i] - ps2[i];
		if (res > 0)
			break ;
		i++;
	}
	return (res);
}
