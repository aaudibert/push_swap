/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrot_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:59:55 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/29 20:08:09 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rrot_a(int *pile, int top)
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
	ft_putstr("rra ");
	pile[top] = tmp;
}
