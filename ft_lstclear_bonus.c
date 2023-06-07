/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:04:06 by andefern          #+#    #+#             */
/*   Updated: 2023/06/07 15:42:09 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief eliminia y libera el nodo lst y su contenido
 * 
 * @param lst la lista
 * @param del función para eliminar
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(node);
	}
}
