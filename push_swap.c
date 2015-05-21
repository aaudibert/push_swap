/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:59:01 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/30 20:16:20 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			*g_flags;

void		check_db(int *pile, int top)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < top)
	{
		while (j <= top)
		{
			if (pile[i] == pile[j])
			{
				ft_putendl_fd("Error", 2);
				if (g_flags[FLAG_E] == 1)
					ft_putendl_fd("Do not use twice (or more) the same #", 2);
				exit (1);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int			main(int ac, char **av)
{
	t_pile pile;

	g_flags = (int*)malloc(sizeof(int) * 3);
	parser(av);
	if (check_param(ac, av) == 1)
	{
		ft_putendl_fd("Error", 2);
		if (g_flags[FLAG_E] == 1)
			ft_putendl("Only use #");
		exit (1);
	}
	ac--;
	pile.a = get_nu(ac, av);
	pile.b = (int *)malloc(sizeof(int) * ac + 1);
	if (g_flags[FLAG_C] == 1 || g_flags[FLAG_E] == 1 || g_flags[FLAG_V] == 1)
		ac--;
	pile.topa = ac - 1;
	check_db(pile.a, pile.topa);
	pile.topb = -1;
	sort_alg(pile);
	return (0);
}
