/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:04:34 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/04 17:50:31 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_str(char **lst)
{
	char	*s;

	if (!lst)
		return ;
	while (*lst)
	{
		s = *lst;
		lst++;
		free (s);
	}
	*lst = NULL;
}

t_stack	*create_numnode(int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		perror_msg("Failed to allocate memory for new node");
	new->value = num;
	new->next = NULL;
	return (new);
}

t_stack	*split_args(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
	{
		j = ft_stol(argv[i]);
		ft_add_back(&a, create_numnode(j));
		i++;
	}
	free_str(tmp);
	free(tmp);
	return (a);
}

t_stack	*check_args(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc < 2)
		perror_msg("Enter at least one argument.\n");
	else if (argc == 2)
		a = split_args(argv);
	else
	{
		while (1 < argc)
		{
			j = ft_stol(argv[i]);
			ft_add_back(&a, create_numnode(j));
			i++;
		}
	}
	return (a);
}
