/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:11:22 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/23 22:30:43 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (p_dst <= p_src || p_dst >= (p_src + len))
	{
		while (len--)
			*p_dst++ = *p_src++;
	}
	else
	{
		p_dst += len - 1;
		p_src += len - 1;
		while (len--)
			*p_dst-- = *p_src--;
	}
	return (dst);
}
