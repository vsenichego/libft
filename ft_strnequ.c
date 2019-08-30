/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:16:50 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/30 18:00:54 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
		n--;
	}
	if (s1[i - 1] == s2[i - 1])
		return (1);
	else
		return (0);
}
