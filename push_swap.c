/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:15:38 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/09 15:55:53 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *a)
{
	ft_printf("stack size: %d\n", ft_stacksize(a));
	while (a)
	{
		ft_printf("%d\n", a->value);
		a = a->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*tmpa;

	tmpa = NULL;
	ft_printf("arg count: %d\n", argc); //
	a = check_args(argc, argv);
	if (!a || check_dupes(a))
	{
		free_stack(&a);
		perror_msg("Duplicates not allowed\n");
	}
	print_stack(a); //
	if (!check_sorted(a))
	{
		tmpa = copy_a(a);
		tmpa = sort_copy(tmpa);
		a = indexing(a, tmpa);
		sorting(&a);
	}
	free_stack(&a);
	free_stack(&tmpa);
	return (0);
}
