/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 14:00:34 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/21 19:52:30 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap_b(int *pile, int top)
{
	int tmp;

	tmp = pile[top];
	pile[top] = pile[top - 1];
	pile[top - 1] = tmp;
}
