/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:15:35 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/04 19:20:11 by julcalde         ###   ########.fr       */
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

// s_list functions to add to libft_updated
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list		*ft_lstlast(t_list *lst);
void		ft_add_back(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);

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