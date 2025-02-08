/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:19:54 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 18:29:46 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Allowed operations:
	Swap
	Push
*/

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
	return (a);
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
	return (b);
}

int	push_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!*b)
	{
		tmp1 = *b;
		tmp2 = *a;
		*a = tmp1;
		*b = tmp1->next;
		tmp1->next = tmp2;
	}
	write (1, "pa\n", 3);
	return (0);
}

int	push_b(t_stack **a, t_stack **b)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!*a)
	{
		tmp1 = *a;
		tmp2 = *b;
		*b = tmp1;
		*a = tmp1->next;
		tmp1->next = tmp2;
	}
	write (1, "pb\n", 3);
	return (0);
}
