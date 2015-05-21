/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 15:35:32 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/30 18:13:09 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				*g_flags;

static void		act_flag(char flag)
{
	if (flag == 'v')
		g_flags[FLAG_V] = 1;
	else if (flag == 'c')
		g_flags[FLAG_C] = 1;
	else if (flag == 'e')
		g_flags[FLAG_E] = 1;
}

static void		wrong_flag(char flag)
{
	ft_putstr("push_swap: illegal option -- ");
	ft_putchar(flag);
	ft_putchar('\n');
	ft_putstr("usage: push_swap [-cev] [file ...]");
	ft_putchar('\n');
	exit(1);
}

static int		check_flags(char flag)
{
	if (flag == 'v'
		|| flag == 'c'
		|| flag == 'e')
		return (1);
	return (0);
}

static void		check_opt(char *opt)
{
	int i;

	i = 1;
	while (opt[i] != '\0')
	{
		if (check_flags(opt[i]) == 0)
			wrong_flag(opt[i]);
		else
			act_flag(opt[i]);
		i++;
	}
}

void			parser(char **argv)
{
	if (argv[1][0] == '-' && (argv[1][1] >= 97 && argv[1][1] <= 122))
		check_opt(argv[1]);
}
