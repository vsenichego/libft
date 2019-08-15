/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:53:04 by smarcos           #+#    #+#             */
/*   Updated: 2019/06/17 12:22:38 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dest;
	char *ptr;

	dest = (char *)malloc((ft_strlen(s1) + 1));
	ptr = dest;
	if (dest != NULL)
	{
		while (*s1)
			*ptr++ = *s1++;
	}
	*ptr = '\0';
	return (dest);
}
