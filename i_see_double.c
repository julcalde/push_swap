/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_see_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:04:36 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/04 18:21:46 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dupes(t_stack *stack)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->value == tmp->value)
				return (1);
			else
				tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}
