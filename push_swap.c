/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:15:38 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 20:00:04 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	// t_stack	*b;
	t_stack	*tmpa;

	tmpa = NULL;
	a = check_args(argc, argv);
	if (!a || check_dupes(a))
	{
		free_stack(&a);
		perror_msg("Duplicates not allowed\n");
	}
	if (!check_sorted(a))
	{
		tmpa = copy_a(a);
		tmpa = sort_copy(tmpa);
		a = indexing(a, tmpa);
		sorting(&a);
	}
	free_stack(&a);
	return (0);
}
