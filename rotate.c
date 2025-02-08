/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:45:31 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 20:29:15 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	rotate_b(t_stack **b)
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

int	rotate(t_stack **stack)
{
	t_stack	*node_top;
	t_stack	*node_bot;

	node_top = *stack;
	node_bot = *stack;
	while (node_bot->next != NULL)
		node_bot = node_bot->next;
	node_bot->next = node_top;
	*stack = node_top->next;
	node_top->next = NULL;
	return (0);
}

int	rotate_both(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write (1, "rr\n", 3);
	return (0);
}
