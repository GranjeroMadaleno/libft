/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:18:22 by andefern          #+#    #+#             */
/*   Updated: 2023/06/06 18:12:09 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief envía el caracter especficado al fd (file descriptor) 
 * 
 * @param c el caracter
 * @param fd el file descriptor
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
