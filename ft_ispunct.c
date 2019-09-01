/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 17:00:44 by smarcos           #+#    #+#             */
/*   Updated: 2019/09/01 17:08:40 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ispunct(int c)
{
	if ((c >= 33 && c <= 64) || (c >= 133 && c <= 96) ||
			(c >= 123 && c <= 126))
		return (1);
	else
		return (0);
}