/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 19:14:53 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/30 19:40:22 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_strtol(const char *str, char **endptr, int base)
{
	size_t	i;
	int		negative;

	i = 0;
	if (((base != 0 && base < 2) || base > 36) || !*str)
		return (0);
	while (ft_isspace(str[i] == 1)
		i++;
	negative = (str[i] == '-') ? -1 : 1;
}
