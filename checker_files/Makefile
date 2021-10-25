# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/03 00:48:02 by abahmani          #+#    #+#              #
#    Updated: 2021/10/24 22:18:56 by abahmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		checker

SRCS	=		srcs/checker_main.c\
				srcs/actions/rotate.c\
				srcs/actions/reverse_rotate.c\
				srcs/actions/push.c\
				srcs/actions/swap.c\
				srcs/check_overflow.c\
				srcs/lst_tools.c\
				srcs/check.c\
				srcs/create_lst.c\
				srcs/get_next_line/get_next_line_bonus.c\
				srcs/get_next_line/get_next_line_utils_bonus.c\
				srcs/processing_push_swap_output.c\
				srcs/split_av.c
				

OBJS	=	${SRCS:.c=.o}

INCS	=	-I ./srcs/ -I ./srcs/get_next_line/ -I ./srcs/libft/

CC		=	gcc 

CFLAGS	=	-Wall -Wextra -Werror -D BUFFER_SIZE=4

RM		=	rm -f
	
all:		${NAME}
				
${NAME}:	${OBJS}
			${MAKE} -C ./srcs/libft bonus
			${CC} ${CFLAGS} ${INCS} $^ -o $@ ./srcs/libft/libft.a
				
.c.o:
			${CC} ${CFLAGS} ${INCS} -c $< -o $@


clean:
			${MAKE} -C ./srcs/libft clean
			${RM} ${OBJS}

fclean:		clean
			${MAKE} -C ./srcs/libft fclean
			${RM} ${NAME}

re:             fclean all

.PHONY:         all clean fclean re