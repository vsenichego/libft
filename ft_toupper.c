/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:47:04 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/23 22:21:41 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 122)
		return (c);
	if ((unsigned char)c >= 97 && (unsigned char)c <= 122)
		return (c -= 32);
	else
		return (c);
}
