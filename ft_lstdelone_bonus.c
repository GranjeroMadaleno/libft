/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:48:06 by andefern          #+#    #+#             */
/*   Updated: 2023/06/07 15:43:50 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Toma como parámetro un nodo lst y libera la
	memoria del contenido utilizando la función del
 * 
 * @param lst el nodo
 * @param del función para liberar memoria
 */

void	ft_lstdelone(t_list *lst, void (*del)(void	*))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	node = lst;
	del(node->content);
	free(node);
}
