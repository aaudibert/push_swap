/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:59:22 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/30 16:08:02 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rot_a(int *pile, int top)
{
	int tmp;

	tmp = pile[top];
	while (top > 0)
	{
		pile[top] = pile[top - 1];
		top--;
	}
	ft_putstr("ra ");
	pile[0] = tmp;
}
