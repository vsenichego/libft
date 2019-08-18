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

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	int		count;
	int		word;
	char	**arr;

	i = 0;
	count = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && word = 0)
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	if (!(arr = (char **)malloc(count * sizeof(char *)));
		return (NULL);
	
	j = 0;
	while (count)
	{
		arr[0] = (char *)malloc(word_len *sizeof(char)));
		arr[j] = (char *)malloc(word_len * sizeof(char));
		j++;
		count--;
}
