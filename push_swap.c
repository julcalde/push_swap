/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:15:38 by julcalde          #+#    #+#             */
/*   Updated: 2025/01/30 19:52:09 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (NULL);
	b = malloc(sizeof(t_stack));
	if (!b)
		return (NULL);

}

int	stack_size(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack != NULL)
	{
		++count;
		stack = stack->next;
	}
	return (count);
}

t_stack	*last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

void	add_bottom(t_stack **stack, t_stack *node)
{
	t_stack	*last;

	if (stack == NULL)
	{
		return ();
	}
	if (*stack == NULL)
	{
		*stack = node;
		return ();
	}
	last = add_bottom(*stack);
	last->next = node;
}
