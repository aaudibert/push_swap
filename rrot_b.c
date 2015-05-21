/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrot_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 14:00:13 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/22 16:00:26 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rrot_b(int *pile, int top)
{
	int tmp;
	int i;

	i = 0;
	tmp = pile[0];
	while (i < top)
	{
		pile[i] = pile[i + 1];
		i++;
	}
	pile[top] = tmp;
}
