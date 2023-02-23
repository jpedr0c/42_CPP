# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 11:57:33 by jocardos          #+#    #+#              #
#    Updated: 2023/01/26 12:10:58 by jocardos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	main

SRCS		= $(addsuffix .cpp, ${SRC})

OBJS		= ${SRCS:.cpp=.o}

NAME		= brain

CC			= c++
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -std=c++98

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

valgrind: all
	valgrind --leak-check=full --show-reachable=yes --show-leak-kinds=all --error-limit=no --gen-suppressions=all --track-origins=yes  --log-file=project.log ./phoneBook 
	cat project.log

.PHONY:		all clean fclean re