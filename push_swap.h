/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:15:35 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 18:36:57 by julcalde         ###   ########.fr       */
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
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

// commands*.c
int			swap_a(t_stack *a);
int			swap_b(t_stack *b);
int			push_a(t_stack **a, t_stack **b);
int			push_b(t_stack **a, t_stack **b);
int			rotate_a(t_stack **a);
int			rotate_b(t_stack **b);
int			rev_rotate_a(t_stack **a);
int			rev_rotate_b(t_stack **b);
int			swap_both(t_stack *a, t_stack *b);
int			rotate_both(t_stack **a, t_stack **b);
int			rev_rotate_both(t_stack **a, t_stack **b);

// split_args.c
t_stack		*check_args(int argc, char **argv);
t_stack		*split_args(char **argv);
t_stack		*create_numnode(int num);
void		free_str(char **lst);

// utility_ft0.c
int			ft_stol(const char *str);
int			ft_is_space(int x);
void		perror_msg(char *str);
void		free_stack(t_stack **stack);

// i_see_double.c
int			check_dupes(t_stack *stack);

// sorting.c
int			check_sorted(t_stack *stack);

#endif