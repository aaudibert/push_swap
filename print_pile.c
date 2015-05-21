/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 16:06:53 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/30 20:19:17 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		print_pile(t_pile pile, int top)
{
	int i;

	i = 0;
	if (top != 0)
		ft_putchar('\n');
	ft_putstr("a: ");
	while (i <= pile.topa)
	{
		ft_putnbr(pile.a[i]);
		i++;
		if (i <= pile.topa)
			ft_putchar(' ');
	}
	ft_putchar('\n');
	i = 0;
	ft_putstr("b: ");
	while (i <= pile.topb)
	{
		ft_putnbr(pile.b[i]);
		if (i < pile.topb)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	ft_putchar('\n');
}
