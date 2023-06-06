/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:31:17 by andefern          #+#    #+#             */
/*   Updated: 2023/06/06 15:54:25 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t	size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	count = 0;
	if (size < 1 || size <= dest_len)
		return (src_len + size);
	while (count < (size - dest_len - 1) && src[count])
	{
		dest[dest_len + count] = src[count];
		count++;
	}
	dest[dest_len + count] = '\0';
	return (dest_len + src_len);
}
