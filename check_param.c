/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:57:42 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/30 18:16:01 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*g_flags;

int		check_flags(char **argv)
{
	if (argv[1][0] == '-' && (argv[1][1] >= 97 && argv[1][1] <= 122))
		return (2);
	else
		return (1);
}

int		check_param(int ac, char **av)
{
	int i;
	int j;

	i = check_flags(av);
	j = 0;
	while (i <= ac - 1)
	{
		while (av[i][j] != '\0')
		{
			if (!(av[i][j] >= 48 && av[i][j] <= 57) && av[i][j] != '-' &&
					av[i][j] != '+')
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
