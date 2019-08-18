/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:21:23 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/15 23:44:51 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*fresh;
	int		count;
	int		i;

	i = n;
	count = (i == 0) ? 1 : 0;
	while (i != 0)
	{
		count++;
		i /= 10;
	}
    if (n == 0)
        return ("0");
	else if (n < 0)
	{
        fresh = ft_strnew(count + 2);
		fresh[0] = '-';
		i++;
        if (n < -2147483647)
        {
            fresh[1] = '2';
            n = -147483648;
        }
        n = -n;
	}
    else
	    fresh = ft_strnew(count + 1);
	while (n)
	{
		fresh[i-- + count - 1] = n % 10 + '0';
		n /= 10;
	}
	return (fresh);
}
