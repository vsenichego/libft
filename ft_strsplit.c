/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:20:36 by smarcos           #+#    #+#             */
/*   Updated: 2019/04/26 16:21:13 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  start;
    char    **arr;

    k = 0;
    start = 0;
    while (s[k] == c)
    {
        k++;
        start = k;
    }
    j = 0;
    while (s[k] != c && s[k] != '\0')
    {
        if (s[k + 1] == c || s[k + 1] == '\0')
        {
            arr[j] = (char *)malloc(k - start + 1);
        }
        k++;
    }
    i = 0;
    while (s[start] != '\0')
    {
        if (s[start] == c)
            ft_strsplit((s + start), c);
        arr[j, i] = s[start];
        i++;
        start++;
}
