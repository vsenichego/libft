/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:26:24 by smarcos           #+#    #+#             */
/*   Updated: 2019/04/17 21:53:22 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (((unsigned char)c >= 0x41 && (unsigned char)c <= 0x5A) ||
		((unsigned char)c >= 0x61 && (unsigned char)c <= 0x7A))
		return (1);
	else
		return (0);
}
