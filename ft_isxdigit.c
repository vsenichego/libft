/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 16:15:22 by smarcos           #+#    #+#             */
/*   Updated: 2019/09/01 16:19:08 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isxdigit(int c)
{
	if (ft_isdigit(c) || (c >= 65 && c <= 70) || (c >= 97 && c <= 102))
		return (1);
	else
		return (0);
}
