/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:15:35 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/09 15:49:16 by julcalde         ###   ########.fr       */
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
	struct s_stack	*next;
}	t_stack;

// push.c
int			push_a(t_stack **a, t_stack **b);
int			push_b(t_stack **a, t_stack **b);

// swap.c
int			swap_a(t_stack *a);
int			swap_b(t_stack *b);
int			swap(t_stack *stack);
int			swap_both(t_stack *a, t_stack *b);

// rotate.c
int			rotate_a(t_stack **a);
int			rotate_b(t_stack **b);
int			rotate(t_stack **stack);
int			rotate_both(t_stack **a, t_stack **b);

// rev_rotate.c
int			rev_rotate_a(t_stack **a);
int			rev_rotate_b(t_stack **b);
int			rev_rotate(t_stack **stack);
int			rev_rotate_both(t_stack **a, t_stack **b);

// split_args.c
void		free_str(char **str);
t_stack		*check_args(int argc, char **argv);
t_stack		*split_args(char **argv);

// utility_ft0.c
long		ft_stol(const char *str);
void		perror_msg(char *str);
void		free_stack(t_stack **stack);
int			ft_stacksize(t_stack *stack);

// i_see_double.c
int			check_dupes(t_stack *stack);

// sorting.c
int			check_sorted(t_stack *stack);
t_stack		*copy_a(t_stack *a);
t_stack		*sort_copy(t_stack *tmpa);
t_stack		*indexing(t_stack *st1, t_stack *st2);
void		sorting(t_stack **a);

// sorting_algos.c
void		sort_3(t_stack **a);
void		sort_5(t_stack **a, t_stack **b);
void		sayan_radish_sort(t_stack **a, t_stack **b);

// t_stack_funcs.c
void		ft_stackadd_back(t_stack **stack, t_stack *new);
t_stack		*ft_stacklast(t_stack *stack);
t_stack		*ft_stacknew(int *value);

#endif