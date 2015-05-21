/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 20:11:43 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/29 20:11:44 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push_a(t_pile *pile)
{
	if (pile->topa == -1)
		return ;
	pile->topb++;
	pile->b[pile->topb] = pile->a[pile->topa];
	pile->topa--;
	ft_putstr("pb ");
}
