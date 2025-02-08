/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:04:34 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/08 20:16:49 by julcalde         ###   ########.fr       */
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
	t_stack	*tmpa;
	char	**tmp;
	int		i;

	a = malloc(sizeof(t_stack));
	tmpa = a;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
	{
		tmpa->value = ft_stol(argv[i]);
		tmpa = tmpa->next;
		i++;
		if (tmp[i])
			tmpa = malloc(sizeof(t_stack));
	}
	tmpa = NULL;
	free_str(tmp);
	free(tmp);
	return (a);
}

t_stack	*check_args(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*tmpa;
	int		i;

	i = 1;
	a = malloc(sizeof(t_stack));
	tmpa = a;
	if (argc < 2)
		perror_msg("Enter at least one argument.\n");
	else if (argc == 2)
		a = split_args(argv);
	else
	{
		while (i < argc)
		{
			tmpa->value = ft_stol(argv[i]);
			tmpa = tmpa->next;
			i++;
			if (i < argc)
				tmpa = malloc(sizeof(t_stack));
		}
		tmpa = NULL;
	}
	return (a);
}
