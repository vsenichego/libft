/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:20:36 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/18 20:02:17 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  size_t  ft_wordcount(char const *s, char c)
{
    size_t  i;
    size_t  count;
    int     word;

    i = 0;
    count = 0;
    word = 0;
    while (s[i])
    {
        if (s[i] != c && word == 0)
        {
            count++;
            word = 1;
        }
        else if (s[i] == c)
            word = 0;
        i++;
    }
    return (count);
}

static  char    **ft_getwords(char **arr, char const *s, char c, size_t wcount)
{
    size_t  i;
    size_t  j;
    size_t  start;

    i = 0;
    j = 0;
    start = 0;
    while (j < wcount)
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        start = i;
        while (s[i] != c && s[i] != '\0')
            i++;
        if (!(arr[j] = ft_strsub(s, start, i - start)))
            return (NULL);
        i++;
        j++;
    }
    return (arr);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	count;
	char	**arr;

	count = ft_wordcount(s, c);
	if (!(arr = (char **)malloc(count * sizeof(char *) + 1)))
		return (NULL);
    arr = ft_getwords(arr, s, c, count);
    arr[count + 1] = NULL;
    return (arr);
}
