/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility_ft0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:25:07 by julcalde          #+#    #+#             */
/*   Updated: 2025/02/03 22:10:34 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	perror_msg(char *str)
{
	write (2, "Error\n", 6);
	ft_printf(str);
	exit(1);
}

int	ft_is_space(int x)
{
	if (x == ' ' || x == '\t' || x == '\n' || x == '\v' || x == '\r' || \
	x == '\f')
		return (1);
	else
		return (0);
}

int	ft_stoi(const char *str)
{
	int				sig;
	long long int	i;

	i = 0;
	sig = 1;
	while (ft_is_space(*str))
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
			perror_msg("Only use digits\n");
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((sig * i > INT_MAX) || (sig * i < INT_MIN))
		perror_msg("Numbers allowed only between -2147483648 and 2147483647");
	return (sig * i);
}
