/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:15:38 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/09 18:40:24 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*tmpa;

	tmpa = NULL;
	a = check_args(argc, argv);
	if (!a)
		return (0);
	if (check_dupes(a))
	{
		free_stack(&a);
		perror_msg();
	}
	if (ft_stacksize(a) == 2 && (a->value > a->next->value))
		return (swap_a(a), 0);
	if (!check_sorted(a))
	{
		tmpa = copy_a(a);
		tmpa = sort_copy(tmpa);
		a = indexing(tmpa, a);
		sorting(&a);
	}
	return (free_stack(&tmpa), 0);
}
