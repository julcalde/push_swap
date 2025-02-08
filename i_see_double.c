/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_see_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:04:36 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 20:27:02 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dupes(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (stack->value == tmp->value)
				return (1);
			else
				tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}
