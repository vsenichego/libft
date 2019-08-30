/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarcos <smarcos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 18:59:24 by smarcos           #+#    #+#             */
/*   Updated: 2019/08/30 19:44:53 by smarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%s\n", ft_memmove(NULL, NULL, 5));
	printf("%s\n", memmove(NULL, NULL, 5));
	return(0);
}