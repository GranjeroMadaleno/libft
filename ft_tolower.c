/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:08:57 by andefern          #+#    #+#             */
/*   Updated: 2023/06/07 16:19:08 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
/**
 * @brief convierte las mayúsculas a minúsuculas
 * 
 * @param c caracter 
 * @return int 
 */

int	ft_tolower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (c);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (c + 32);
	}
	return (c);
}
