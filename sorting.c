/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:20:57 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 19:16:54 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_stack *stack)
{
	int	i;

	i = stack->value;
	while (stack)
	{
		if (i > stack->value)
			return (0);
		i = stack->value;
		stack = stack->next;
	}
	return (ft_printf("Stack already sorted\n"), 1);
}

void	sorting(t_stack **a)
{
	t_stack	*b;
	int		i;

	b = NULL;
	if (ft_lstsize(*a) == 2)
	else if (ft_lstsize(*a) == 3)
	else if (ft_lstsize(*a) <= 5)
	else if (ft_lstsize(*a) > 5)

}

t_stack	*copy_a(t_stack *a)
{
	t_stack	*tmpa;
	t_stack	*ptr;

	tmpa = malloc(sizeof(t_stack));
	if (!tmpa)
		return (free_stack(tmpa), NULL);
	tmpa->data = a->data;
	ptr = tmpa;
	a = a->next;
	while (a != NULL)
	{
		ptr->next = malloc(sizeof(t_stack));
		if (!ptr)
			return (free_stack(tmpa), NULL);
		ptr = ptr->next;
		ptr->value = a->value;
		a = a->next;
	}
	ptr->next = NULL;
	return (tmpa);
}

t_stack	*sort_copy(t_stack *tmpa)
{
	int		swap;
	t_stack	*tmp;

	tmp = tmpa;
	while (tmpa ->next != NULL)
	{
		if (tmpa->value > tmpa->next->value)
		{
			swap = tmpa->value;
			tmpa->value = tmpa->next->value;
			tmpa->next->value = swap;
			tmpa = tmp;
		}
		else
			tmpa = tmpa->next;
	}
	tmpa = tmp;
	return (tmpa);
}

t_stack	*indexing(t_stack *st1, t_stack *st2)
{
	int		i;
	t_stack	*tmp1;
	t_stack	*tmp2;

	i = 1;
	tmp1 = st1;
	tmp2 = st2;
	while (st2 != NULL)
	{
		i = 1;
		while (st1 != NULL)
		{
			if (st1->value == st2->value)
			{
				st2->value = (i);
				break ;
			}
			i++;
			st1 = st1->next;
		}
		st1 = tmp1;
		st2 = st2->next;
	}
	st2 = tmp2;
	return (st2);
}
