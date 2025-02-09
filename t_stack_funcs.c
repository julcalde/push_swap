/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:41:47 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/09 15:48:56 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (stack)
	{
		if (*stack == NULL)
		{
			*stack = new;
		}
		else
		{
			tmp = ft_stacklast(*(stack));
			tmp->next = new;
		}
	}
}

t_stack	*ft_stacklast(t_stack *stack)
{
	while (stack)
	{
		if (!stack->next)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

t_stack	*ft_stacknew(int *value)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(*stack));
	if (!stack)
	{
		perror_msg("malloc failed 02");
	}
	stack->value = value;
	stack->next = NULL;
	return (stack);
}
