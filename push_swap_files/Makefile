# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 19:54:21 by abahmani          #+#    #+#              #
#    Updated: 2021/10/24 22:19:37 by abahmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		push_swap

SRCS	=		srcs/add_place.c srcs/check.c\
				srcs/create_lst.c srcs/init.c\
				srcs/place_nb_rr.c\
				srcs/place_fct_over_five.c\
				srcs/place_nb_for_five.c\
				srcs/place_nb_r.c srcs/push_swap_main.c\
				srcs/push.c srcs/reverse_rotate.c\
				srcs/rotate.c srcs/swap.c\
				srcs/search_best_move.c\
				srcs/sort_five_nb.c\
				srcs/sort_hundred_nb.c\
				srcs/sort_three_nb.c\
				srcs/sort_two_nb.c srcs/sort.c\
				srcs/stack_tools.c	srcs/test_on_a.c\
				srcs/test_on_a_b.c srcs/test_on_b.c\
				srcs/sort_five_hundred_nb.c srcs/lst_tools.c\
				srcs/actions_three_nb_sort.c srcs/check_overflow.c\

OBJS	=	${SRCS:.c=.o}

INCS	=	-I ./srcs/ -I ./srcs/Libft/

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${MAKE} -C ./srcs/Libft bonus
			${CC} ${CFLAGS} ${INCS} $^ -o $@ ./srcs/Libft/libft.a

.c.o:
			${CC} ${CFLAGS} ${INCS} -c $< -o $@


clean:
			${MAKE} -C ./srcs/Libft clean
			${RM} ${OBJS}

fclean:		clean
			${MAKE} -C ./srcs/Libft fclean
			${RM} ${NAME}

re:             fclean all

.PHONY:         all clean fclean re
