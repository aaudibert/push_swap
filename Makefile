# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaudiber <aaudiber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/06 13:57:54 by aaudiber          #+#    #+#              #
#    Updated: 2015/04/30 16:01:54 by aaudiber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c\
	  get_nu.c\
	  swap_a.c\
	  swap_b.c\
	  swap_ab.c\
	  push_a.c\
	  push_b.c\
	  rot_a.c\
	  rot_b.c\
	  rot_ab.c\
	  rrot_a.c\
	  rrot_b.c\
	  rrot_ab.c\
	  check_param.c\
	  sort_alg.c\
	  print_pile.c\
	  parser.c\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	@/bin/echo "-----Compilating sources-----"
	@make -C ./libft
	@/bin/echo "---Done---"
	@/bin/echo "-----Creating executable-----"
	@gcc $(FLAGS) -o $(NAME) $(SRC) -I./libft/includes/ ./libft/libft.a
	@/bin/echo "---Done---"

clean:
	@/bin/rm -f $(OBJ)
	@make clean -C ./libft

fclean:
	@/bin/rm -f $(NAME)
	@make fclean -C ./libft

re: fclean all
