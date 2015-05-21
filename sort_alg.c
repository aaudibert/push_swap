/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_alg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/05 19:18:24 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/30 20:21:26 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			get_min_pos(int *pile, int top)
{
	int i;
	int min;
	int pos;

	i = 1;
	pos = 0;
	min = pile[0];
	while (i <= top)
	{
		if (pile[i] < min)
		{
			min = pile[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int			get_min_half(int *pile, int top)
{
	int i;
	int min;
	int pos;

	i = 0;
	pos = 0;
	min = pile[0];
	while (i <= top)
	{
		if (pile[i] < min)
		{
			min = pile[i];
			pos = i;
		}
		i++;
	}
	if (pos == 0)
		return (1);
	if ((top + 1) / pos >= (top + 1) / 2)
		return (1);
	else
		return (0);
}

void		min_half(t_pile *pile)
{
	int		pos;

	pos = get_min_pos(pile->a, pile->topa);
	while (pos >= 0)
	{
		rrot_a(pile->a, pile->topa);
		pos--;
	}
	push_a(pile);
}

void		top_half(t_pile *pile)
{
	int pos;

	pos = get_min_pos(pile->a, pile->topa);
	while (pos < pile->topa)
	{
		rot_a(pile->a, pile->topa);
		pos++;
	}
	push_a(pile);
}

void		sort_alg(t_pile pile)
{
	int i;

	i = 0;
	if (g_flags[FLAG_V] == 1)
		print_pile(pile, i);
	i++;
	while (pile.topa > 0)
	{
		if (get_min_half(pile.a, pile.topa) == 1)
			min_half(&pile);
		else
			top_half(&pile);
		if (g_flags[FLAG_V] == 1)
			print_pile(pile, i);
	}
	while (pile.topb >= 0)
	{
		push_b(&pile);
		if (pile.topb >= 0)
			ft_putchar(' ');
		if (g_flags[FLAG_V] == 1)
			print_pile(pile, i);
	}
	if (g_flags[FLAG_V] != 1)
		ft_putchar('\n');
}
