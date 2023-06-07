/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:07:03 by andefern          #+#    #+#             */
/*   Updated: 2023/06/07 15:58:34 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief copia len bytes de la cadena src a la cadena dst
 * 
 * @param dst cadena final
 * @param src cadena que se modifica
 * @param len bytes a ccopiar
 * @return void* 
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
