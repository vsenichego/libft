/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:50:02 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/18 18:37:30 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	size_t	nbr;
	int		negative;

	i = 0;
	nbr = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	negative = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]) == 1 && str[i])
	{
		nbr = 10 * nbr + (str[i] - '0');
		i++;
	}
	return (nbr * negative);
}
