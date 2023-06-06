/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:57:21 by andefern          #+#    #+#             */
/*   Updated: 2023/06/06 15:55:27 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_toupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (c);
	}
	else if ((c >= 'a') && (c <= 'z'))
	{
		return (c - 32);
	}
	return (c);
}
