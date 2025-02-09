/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:04:34 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/09 17:28:43 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

t_stack	*split_args(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	a = NULL;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
	{
		j = ft_stol(tmp[i]);
		ft_stackadd_back(&a, ft_stacknew(j));
		i++;
	}
	free_str(tmp);
	return (a);
}

t_stack	*check_args(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	a = NULL;
	if (argc < 2)
		perror_msg("Enter at least one argument.\n");
	if (argc == 2)
		a = split_args(argv);
	else
	{
		i = 1;
		while (i < argc)
		{
			j = ft_stol(argv[i]);
			ft_stackadd_back(&a, ft_stacknew(j));
			i++;
		}
	}
	return (a);
}
