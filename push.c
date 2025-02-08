/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:35:37 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 19:44:59 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
