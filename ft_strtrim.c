/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:19:52 by smarcos           #+#    #+#             */
/*   Updated: 2019/04/26 16:20:27 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
    char    *fresh;
    size_t  i;
    size_t  j;

    i = 0;
    j = ft_strlen(s) - 1;
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        i++;
    while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j)
        j--;
    if (j > i)
    {
        fresh = ft_strsub(s, i, j - i + 1);
        return (fresh);
    }
    else
    {
        fresh = ft_strnew(1);
        return (fresh);
    }
    if (!fresh)
        return (NULL);
}
