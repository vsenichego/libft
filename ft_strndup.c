/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:48:44 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/30 18:26:49 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*dst;

	if (!(dst = (char *)malloc(sizeof(char) * ft_strnlen(s, n) + 1)))
		return (NULL);
	dst = ft_strncpy(dst, s, n);
	dst[n] = '\0';
	return (dst);
}
