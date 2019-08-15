/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:13:40 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/15 16:04:53 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	i;

	fresh = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		fresh[i] = f(s[i]);
		i++;
	}
	return (fresh);
}
