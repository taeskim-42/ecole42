/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:03:17 by pac-man           #+#    #+#             */
/*   Updated: 2021/08/27 14:11:05 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

void	ft_append_t_node(t_stack *to, t_node *from)
{
	t_node	*tmp;

	tmp = ft_export_t_node(from);
	if (!(to->head))
		to->head = tmp;
	else
	{
		if (!(to->tail))
		{
			to->tail = to->head;
			to->head = tmp;
			to->head->next = to->tail;
			to->tail->prev = to->head;
		}
		else
		{
			tmp->next = to->head;
			to->head->prev = tmp;
			to->head = tmp;
		}
		to->head->prev = to->tail;
		to->tail->next = to->head;
	}
	to->count++;
}
