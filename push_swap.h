/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:59:10 by aaudiber          #+#    #+#             */
/*   Updated: 2015/04/30 20:19:56 by aaudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <unistd.h>
# include <stdlib.h>
# include "libft/includes/libft.h"

# define FLAG_C	0
# define FLAG_E	1
# define FLAG_V	2

extern int		*g_flags;

typedef struct	s_pile
{
	int			*a;
	int			*b;
	int			topa;
	int			topb;
}				t_pile;

int			push_swap(int ac, char **av);
int			*get_nu(int nu, char **pile);
void		swap_a(int *pile, int top);
void		swap_b(int *pile, int top);
void		swap_ab(t_pile pile);
void		push_a(t_pile *pile);
void		push_b(t_pile *pile);
void		rot_a(int *pile, int top);
void		rot_b(int *pile, int top);
void		rot_ab(t_pile pile);
void		rrot_a(int *pile, int top);
void		rrot_b(int *pile, int top);
void		rrot_ab(t_pile pile);
int			check_param(int ac, char **av);
void		sort_alg(t_pile pile);
void		print_pile(t_pile pile, int i);
void		parser(char **av);

#endif
