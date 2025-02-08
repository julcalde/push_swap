/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:53:46 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 22:24:08 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	if (((*a)->value == 2) && ((*a)->next->value == 1) \
		&& ((*a)->next->next->value == 3))
		swap_a(*a);
	else if (((*a)->value == 2) && ((*a)->next->value == 3) \
		&& ((*a)->next->next->value == 1))
		rev_rotate_a(a);
	else if (((*a)->value == 3) && ((*a)->next->value == 2) \
		&& ((*a)->next->next->value == 1))
	{
		swap_a(*a);
		rev_rotate_a(a);
	}
	else if (((*a)->value == 3) && ((*a)->next->value == 1) \
		&& ((*a)->next->next->value == 2))
		rotate_a(a);
	else if (((*a)->value == 1) && ((*a)->next->value == 3) \
		&& ((*a)->next->next->value == 2))
	{
		swap_a(*a);
		rotate_a(a);
	}
}

void	sort_5(t_stack **a, t_stack **b)
{
	while (ft_stacksize(*a) > 3)
	{
		if ((*a)->value == 4 || (*a)->value == 5)
			push_b(a, b);
		else
			rotate_a(a);
	}
	sort_3(a);
	push_a(a, b);
	if ((*a)->value == 4 && (*b) != NULL)
	{
		rotate_a(a);
		push_a(a, b);
		rotate_a(a);
	}
	else if ((*a)->value == 4 && (*b) == NULL)
		rotate_a(a);
	else if ((*a)->value == 5)
	{
		push_a(a, b);
		rotate_a(a);
		rotate_a(a);
	}
}

void	sayan_radish_sort(t_stack **a, t_stack **b)
{
	int	stack_index;
	int	great_repbit;
	int	i;
	int	j;

	stack_index = ft_stacksize(*a);
	great_repbit = 0;
	while ((stack_index >> great_repbit) != 0)
		great_repbit++;
	i = 0;
	while (i < great_repbit)
	{
		j = 0;
		while (j < stack_index)
		{
			if ((((*a)->value >> i) & 1) == 1)
				rotate_a(a);
			else
				push_b(a, b);
			j++;
		}
		while ((*b) != NULL)
			push_a(a, b);
		i++;
	}
}
