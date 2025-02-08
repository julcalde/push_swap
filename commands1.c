/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:57:13 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 18:15:04 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	Rotate
	Reerse rotate
*/

int	rotate_a(t_stack **a)
{
	t_stack	*node_top;
	t_stack	*node_bot;

	node_top = *a;
	node_bot = *a;
	while (node_bot->next != NULL)
		node_bot = node_bot->next;
	node_bot->next = node_top;
	*a = node_top->next;
	node_top->next = NULL;
	write(1, "ra\n", 3);
	return (0);
}

int	rotate_b(t_stack	**b)
{
	t_stack	*node_top;
	t_stack	*node_bot;

	node_top = *b;
	node_bot = *b;
	while (node_bot->next != NULL)
		node_bot = node_bot->next;
	node_bot->next = node_top;
	*b = node_top->next;
	node_top->next = NULL;
	write(1, "rb\n", 3);
	return (0);
}

int	rev_rotate_a(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*cur;

	tmp = *a;
	cur = NULL;
	while (tmp->next != NULL)
	{
		cur = tmp;
		tmp = tmp->next;
	}
	cur->next = NULL;
	tmp->next = *a;
	*a = tmp;
	write (1, "rra\n", 4);
	return (0);
}

int	rev_rotate_b(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*cur;

	tmp = *b;
	cur = NULL;
	while (tmp->next != NULL)
	{
		cur = tmp;
		tmp = tmp->next;
	}
	cur->next = NULL;
	tmp->next = *b;
	*b = tmp;
	write (1, "rrb\n", 4);
	return (0);
}
