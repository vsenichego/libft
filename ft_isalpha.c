/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:26:24 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/23 22:57:13 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (!c || c > 122)
		return (0);
	if (((unsigned char)c >= 65 && (unsigned char)c <= 90) ||
		((unsigned char)c >= 97 && (unsigned char)c <= 122))
		return (1);
	else
		return (0);
}
