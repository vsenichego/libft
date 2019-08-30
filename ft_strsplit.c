/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:20:36 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/30 18:03:02 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *str, char ch)
{
	size_t	i;
	int		count;
	int		is_word;

	i = 0;
	count = 0;
	is_word = 0;
	while (str[i])
	{
		if (str[i] != ch && is_word == 0)
		{
			count++;
			is_word = 1;
		}
		else if (str[i] == ch)
			is_word = 0;
		i++;
	}
	return (count);
}

static char	**ft_getwords(char **arr, char const *str, char ch, int wcount)
{
	size_t	i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	while (j < wcount)
	{
		while (str[i] == ch && str[i] != '\0')
			i++;
		start = i;
		while (str[i] != ch && str[i] != '\0')
			i++;
		if (!(arr[j] = ft_strsub(str, start, i - start)))
			return (NULL);
		i++;
		j++;
	}
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		count;
	char	**arr;

	if (!s)
		return (NULL);
	count = ft_wordcount(s, c);
	if (!(arr = (char **)malloc(count * sizeof(char *) + 1)))
		return (NULL);
	arr = ft_getwords(arr, s, c, count);
	if (!arr)
		return (NULL);
	arr[count] = NULL;
	return (arr);
}
