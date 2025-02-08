/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility_ft0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:25:07 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 20:42:14 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	perror_msg(char *str)
{
	write (2, "Error\n", 6);
	ft_printf(str);
	exit(1);
}

int	ft_stol(const char *str)
{
	int				sig;
	long long int	i;

	i = 0;
	sig = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sig = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			perror_msg("Please use digits only.\n");
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((sig * i > 2147483647) || (sig * i < -2147483648))
		perror_msg("Numbers allowed only between -2147483648 and 2147483647");
	return (sig * i);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
	{
		return ;
	}
	while (*stack)
	{
		tmp = (*stack)->next;
		(*stack)->value = 0;
		free(*stack);
		*stack = tmp;
	}
}

int	ft_stacksize(t_stack *stack)
{
	int		size;
	t_stack	*tmp;

	tmp = stack;
	size = 1;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
