/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:32:05 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/09 18:24:03 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_a(t_stack *a)
{
	int	tmp;

	if (a && a->next)
	{
		tmp = a->value;
		a->value = a->next->value;
		a->next->value = tmp;
	}
	write (1, "sa\n", 3);
	return (0);
}

int	swap_b(t_stack *b)
{
	int	tmp;

	if (b && b->next)
	{
		tmp = b->value;
		b->value = b->next->value;
		b->next->value = tmp;
	}
	write (1, "sb\n", 3);
	return (0);
}

int	swap(t_stack *stack)
{
	int	tmp;

	if (stack && stack->next)
	{
		tmp = stack->value;
		stack->value = stack->next->value;
		stack->next->value = tmp;
	}
	return (0);
}

int	swap_both(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 4);
	return (0);
}
