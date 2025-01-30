/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:19:54 by julcalde          #+#    #+#             */
/*   Updated: 2025/01/30 19:38:24 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Allowed operations:
	Swap
	Push
	Rotate
	Reerse rotate
*/

void	push(t_stack **this_node, t_stack *on_top)
{
	if (this_node && on_top)
	{
		on_top->next = *this_node;
		*this_node = on_top;
	}
}

void	swap()
{

}

void	rotate()
{

}

void	rev_rotate()
{
	
}