/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:31:03 by andefern          #+#    #+#             */
/*   Updated: 2023/06/07 15:41:01 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief añade el nodo new al final de la lista lst
 * 
 * @param lst la lista
 * @param new el nodo
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*c_node;

	if (!new)
		return ;
	if (*lst)
	{
		c_node = *lst;
		while (c_node->next != NULL)
			c_node = c_node->next;
		c_node->next = new;
	}
	else
		*lst = new;
}
