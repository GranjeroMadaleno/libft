/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:31:17 by andefern          #+#    #+#             */
/*   Updated: 2023/06/07 16:09:01 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief agrega la cadena src al final de dst
 * 
 * @param dst primer cadena 
 * @param src segunda cadena
 * @param size tamaño específico
 * @return size_t 
 */

size_t	ft_strlcat(char *dst, const char *src, size_t	size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	count;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	count = 0;
	if (size < 1 || size <= dst_len)
		return (src_len + size);
	while (count < (size - dst_len - 1) && src[count])
	{
		dst[dst_len + count] = src[count];
		count++;
	}
	dst[dst_len + count] = '\0';
	return (dst_len + src_len);
}
