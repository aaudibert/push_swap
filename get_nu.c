/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:58:03 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/30 20:15:57 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			*g_flags;

void		check_nu(int val, char *real)
{
	char *tmp;

	tmp = ft_itoa(val);
	if (real[0] == '+')
		real = ft_strsub(real, 1, (ft_strlen(real) - 1));
	if (val == 0 && (ft_strequ(real, "-0") == 1))
		return ;
	if (ft_strequ(tmp, real) == 1)
		return ;
	else
	{
		ft_putendl_fd("Error", 2);
		if (g_flags[FLAG_E] == 1)
			ft_putendl_fd("Must fit inside an int", 2);
		exit (1);
	}
}

int			*get_nu(int nu, char **pile)
{
	int *ret;
	int i;
	int end;

	if (g_flags[FLAG_C] == 1 || g_flags[FLAG_E] == 1 || g_flags[FLAG_V] == 1)
		end = 1;
	else
		end = 0;
	i = 0;
	ret = (int *)malloc(sizeof(int) * nu + 1);
	while (nu > end)
	{
		ret[i] = ft_atoi(pile[nu]);
		check_nu(ret[i], pile[nu]);
		nu--;
		i++;
	}
	return (ret);
}
