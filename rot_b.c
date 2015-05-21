/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:59:43 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/22 15:55:53 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rot_b(int *pile, int top)
{
	int tmp;

	tmp = pile[top];
	while (top > 0)
	{
		pile[top] = pile[top - 1];
		top--;
	}
	pile[0] = tmp;
}
