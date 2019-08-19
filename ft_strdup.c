/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:53:04 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/19 21:01:46 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dest;
	char *ptr;

	if (!(dest = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	ptr = dest;
	if (dest)
	{
		while (*s1)
			*ptr++ = *s1++;
	}
	*ptr = '\0';
	return (dest);
}
