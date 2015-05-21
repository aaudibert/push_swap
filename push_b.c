/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 20:11:50 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/29 20:11:59 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push_b(t_pile *pile)
{
	if (pile->topb == -1)
		return ;
	pile->topa++;
	pile->a[pile->topa] = pile->b[pile->topb];
	pile->topb--;
	ft_putstr("pa");
}
