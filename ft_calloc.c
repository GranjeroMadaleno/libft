/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:12:41 by andefern          #+#    #+#             */
/*   Updated: 2023/06/07 15:34:28 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * @brief asigna memoria y devuelve un puntero de esa memoria asignada
 * 
 * @param count número de elementos
 * @param size tamaño asignado
 * @return void* 
 */

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;

	dst = malloc(count * size);
	if (dst == NULL)
		return (NULL);
	return (ft_memset(dst, 0, count * size));
}
