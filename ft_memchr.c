/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:00:50 by andefern          #+#    #+#             */
/*   Updated: 2023/06/07 15:54:22 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/**
 * @brief Si se encuentra el byte c dentro del bloque de memoria, 
 * la función devuelve un puntero al byte encontrado
 * 
 * @param s string recivido
 * @param c valor a buscar
 * @param n bytes
 * @return void* 
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	k;
	unsigned char	*str;
	unsigned char	*res;

	i = 0;
	res = NULL;
	k = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == k)
		{
			res = (str + i);
			return (res);
		}
		i++;
	}
	return (res);
}
