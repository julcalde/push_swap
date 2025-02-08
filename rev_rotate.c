/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:49:34 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 20:29:36 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	rev_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*cur;

	tmp = *stack;
	cur = NULL;
	while (tmp->next != NULL)
	{
		cur = tmp;
		tmp = tmp->next;
	}
	cur->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
	return (0);
}

int	rev_rotate_both(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	write (1, "rrr\n", 4);
	return (0);
}
