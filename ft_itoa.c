/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:21:23 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/19 20:38:54 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int     ft_nbcount(int nb)
{
	int	count;

	count = (nb == 0) ? 1 : 0;
	while (nb)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

static  char    *ft_nbtostr(char *str, int n, int size)
{
	while (n)
	{
		str[size-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

char            *ft_itoa(int n)
{
	char	*fresh;
	int		count;

	count = ft_nbcount(n);
	if (n < 0)
		count++;
	if (!(fresh = ft_strnew(count + 1)))
		return (NULL);
	if (n == 0)
	{
		fresh[0] = '0';
		return (fresh);
	}
	else if (n < 0)
	{
		fresh[0] = '-';
		n = -n;
	}
	if (n == MIN_INT)
	{
		fresh[1] = '2';
		n = 147483648;
	}
	fresh = ft_nbtostr(fresh, n, count);
	return (fresh);
}
