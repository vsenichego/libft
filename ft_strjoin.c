/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:18:46 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/15 15:54:02 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	size;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1) + ft_strlen(s2);
	fresh = ft_strnew(size);
	if (!fresh)
		return (NULL);
	fresh[size] = '\0';
	i = 0;
	while (s1[i])
	{
		fresh[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		fresh[i] = s2[j];
		i++;
		j++;
	}
	return (fresh);
}
