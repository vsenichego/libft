/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:25:16 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/13 19:29:20 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && n)
	{
		i++;
		n--;
	}
	if (!n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
