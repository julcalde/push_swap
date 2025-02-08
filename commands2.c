/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:26:45 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 18:35:52 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	commands both ways
*/

int	swap_both(t_stack *a, t_stack *b)
{
	swap_a(a);
	swap_b(b);
	return (0);
}

int	rotate_both(t_stack **a, t_stack **b)
{
	rotate_a(a);
	rotate_b(b);
	return (0);
}

int	rev_rotate_both(t_stack **a, t_stack **b)
{
	rev_rotate_a(a);
	rev_rotate_b(b);
	return (0);
}
