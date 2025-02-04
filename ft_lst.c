/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:55:11 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/04 19:19:55 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// functions to add to libft_updated via campus
#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	ft_add_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst)
	{
		if (*lst == NULL)
		{	
			*lst = new;
		}
		else
		{
			tmp = ft_lstlast(*(lst));
			tmp->next = new;
		}
	}
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*lst;

// 	lst = (t_list *)malloc(sizeof(*lst));
// 	if (!lst)
// 	{
// 		return (NULL);
// 	}
// 	lst->content = content;
// 	lst->next = NULL;
// 	return (lst);
// }

// void	ft_add_front(t_list **lst, t_list *new)
// {
// 	if (lst && new)
// 	{
// 		new->next = *lst;
// 		*lst = new;
// 	}
// }

// void	ft_lstdelone(t_list *lst, void (*del)(void*))
// {
// 	if (!lst || !del)
// 	{
// 		return ;
// 	}
// 	del (lst->content);
// 	free (lst);
// }

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*next;

// 	next = *lst;
// 	while (next)
// 	{
// 		next = next->next;
// 		ft_lstdelone(*lst, del);
// 		*lst = next;
// 	}
// 	lst = NULL;
// }

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	t_list	*next;

// 	if (lst != NULL)
// 	{
// 		next = lst;
// 		while (1)
// 		{
// 			(*f)(next->content);
// 			next = next->next;
// 			if (!next)
// 			{
// 				return ;
// 			}
// 		}
// 	}
// }

