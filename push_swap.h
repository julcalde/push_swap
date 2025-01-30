/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:15:35 by julcalde          #+#    #+#             */
/*   Updated: 2025/01/30 19:52:27 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;		// number to be sorted
	int				index;		// index in the list of all values before sort
	int				pos;		// current position in either stacks
	int				target_pos;	// target pos in stack A of num in stack B
	int				cost_a;		// cost for num in stack A to reach stack's top
	int				cost_b;		// cost for num in stack B to reach stack's top
	struct s_stack	*next;		// pointer to the next element in the list
}	t_stack;

int		stack_size(t_stack *stack);
void	push(t_stack **this_node, t_stack *on_top);
t_stack	*last_node(t_stack *stack);
void	add_bottom(t_stack **stack, t_stack *node);


#endif