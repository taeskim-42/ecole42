/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_setter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 00:56:14 by pac-man           #+#    #+#             */
/*   Updated: 2021/08/25 02:44:55 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

node *create_node(int v_num)
{
	node *n;

	n = (node *)malloc(sizeof(node));
	if (!(n))
		return NULL;
	n->value = v_num;
	n->prev = NULL;
	n->next = NULL;
	return (n);
}

void stack_init(stack *stk, node *new_node)
{
	if (!(stk->head))
		stk->head = new_node;
	else
	{
		if (!(stk->tail))
		{
			stk->tail = new_node;
			stk->head->next = stk->tail;
			stk->tail->prev = stk->head;
		}
		else
		{
			new_node->prev = stk->tail;
			stk->tail->next = new_node;
			stk->tail = new_node;
		}
		stk->head->prev = stk->tail;
		stk->tail->next = stk->head;
	}
	stk->count++;
}

void ft_append_s_el(stack *s_a, int v)
{
	int *tmp;
	int i;

	i = -1;
	tmp = s_a->s_list;
	s_a->s_list_count++;
	s_a->s_list = (int *)malloc(sizeof(int) * s_a->s_list_count);
	if (!(s_a->s_list))
		exit(1);
	while (++i < s_a->s_list_count - 1)
		s_a->s_list[i] = tmp[i];
	s_a->s_list[i] = v;
	if (tmp)
	{
		free(tmp);
		tmp = 0;
	}
}

void ft_find_sequence(stack *s_a, int els, int *v_nums)
{
	int i;
	int se;

	i = -1;
	se = 0;
	while (++i < els - 1)
	{
		if (v_nums[i] < v_nums[i + 1])
		{
			se++;
			if (se >= 5)
			{
				if (se == 5)
					for (int j = se - 1; j >= 0; j--)
						ft_append_s_el(s_a, v_nums[i - j]);
				else
					ft_append_s_el(s_a, v_nums[i]);
			}
		}
		else
			se = 0;
	}
}

// foundation ft_init_foundation(foundation *f)
// {
// 	f->count = 1;
// 	f->index = 0;
// 	return (*f);
// }

// void ft_get_foundation(int *v_nums, stack *f, int the_number_of_els)
// {
// 	int i;
// 	foundation tmp;

// 	i = -1;
// 	tmp = ft_init_foundation(&tmp);
// 	while (the_number_of_els - 1 > ++i)
// 	{
// 		if (v_nums[i] > v_nums[i + 1])
// 		{
// 			if (tmp.count > f->s_count)
// 			{
// 				f->s_index = tmp.index;
// 				f->s_count = tmp.count;
// 			}
// 			tmp.count = 1;
// 			tmp.index = i + 1;
// 		}
// 		else
// 			tmp.count++;
// 	}
// 	if (tmp.count > f->s_count)
// 	{
// 		f->s_index = tmp.index;
// 		f->s_count = tmp.count;
// 	}
// }


void node_setter(stack *s_a, int the_number_of_els, int *v_nums)
{
	int i;

	i = -1;
	// ft_get_foundation(v_nums, s_a, the_number_of_els);
	while (++i < the_number_of_els)
		stack_init(s_a, create_node(*(v_nums + i)));
}
