# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/03 15:32:56 by abahmani          #+#    #+#              #
#    Updated: 2021/10/25 16:13:34 by abahmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=		push_swap

BONUS		=		checker

RM			=		rm -f

all:		${NAME}

${NAME}:
			${MAKE} -C ./push_swap_files
			mv ./push_swap_files/push_swap .

bonus:		${BONUS}

${BONUS}:
			${MAKE} -C ./checker_files
			mv ./checker_files/checker .

clean:		
			${MAKE} -C ./push_swap_files clean
			${MAKE} -C ./checker_files clean

fclean:		clean
			${MAKE} -C ./push_swap_files fclean
			${MAKE} -C ./checker_files fclean
			${RM} ${NAME}
			${RM} ${BONUS}

re:             fclean all

FORCE : ;

.PHONY:         FORCE all clean fclean re