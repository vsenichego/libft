/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:50:02 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/30 16:21:26 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t			i;
	long long int	nbr;
	int				negative;

	i = 0;
	nbr = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	negative = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]) == 1 && str[i])
	{
		if ((nbr * 10 + (str[i] - '0')) < nbr)
		{
			if (negative == 1)
				return (-1);
			else
				return (0);
		}
		nbr = 10 * nbr + (str[i] - '0');
		i++;
	}
	return (nbr * negative);
}
