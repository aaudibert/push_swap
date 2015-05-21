/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 14:00:20 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/21 19:52:05 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap_a(int *pile, int top)
{
	int tmp;

	tmp = pile[top];
	pile[top] = pile[top - 1];
	pile[top - 1] = tmp;
}
