# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 11:57:33 by jocardos          #+#    #+#              #
#    Updated: 2023/01/27 13:23:02 by jocardos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ReplaceFile \
				main

SRCS		= $(addsuffix .cpp, ${SRC})

OBJS		= ${SRCS:.cpp=.o}

NAME		= replace

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
	valgrind --leak-check=full --show-reachable=yes --show-leak-kinds=all --error-limit=no --gen-suppressions=all --track-origins=yes  --log-file=project.log ./human 
	cat project.log

.PHONY:		all clean fclean re


# SHELL			= /bin/bash

# NAME				= phoneBook
# CC					= c++
# CPPFLAGS			= -Wall -Werror -Wextra -std=c++98
# RM					= rm -rf

# #Styles
# SET_COLOR	= \033[0:39m
# RED				= \033[0;31m
# GREEN			= \033[0;32m
# YELLOW		= \033[0;33m
# BLUE			= \033[0;34m
# MAGENTA		= \033[0;35m
# CYAN			= \033[0;36m
# GRAY			= \033[0;90m
# L_RED			=	\033[0;91m
# L_GREEN		=	\033[0;92m
# L_YELLOW	=	\033[0;93m
# L_BLUE		=	\033[0;94m
# L_MAGENTA	=	\033[0;95m
# L_CYAN		=	\033[0;96m
# WHITE			= \033[0;97m
# BG_GREEN	= \033[42;1;37m

# #Sources
# SRC_FILES			= PhoneBook Contact

# SRC = $(addsuffix .cpp, $(SRC_FILES))
# OBJ = $(addsuffix .o, $(SRC_FILES))

# all:	$(NAME)

# $(NAME):	$(OBJ)
# 			@echo -e -n "$(YELLOW)[MODULE_00]:$(SET_COLOR)"
# 			@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
# 			@echo -e "$(L_GREEN) => Success ✅$(SET_COLOR)"

# $(OBJ)%.o: $(SRC)%.cpp
# 			@echo -e -n "$(L_GREEN)✓$(SET_COLOR)"
# 			@$(CC) $(CPPFLAGS) $(HEADER) -c $< -o $@

# clean:
# 			@$(RM) $(OBJ)
# 			@echo -e -n "$(MAGENTA)[MODULE_00]:$(SET_COLOR)$(BLUE) Object files$(SET_COLOR)$(GREEN)  => Cleaned$(SET_COLOR)"
# 			@echo -e " 🗑️$(SET_COLOR)"

# fclean:		clean
# 			@$(RM) $(NAME)
# 			@$(RM) project.log
# 			@echo -e -n "$(MAGENTA)[MODULE_00]:$(SET_COLOR)$(BLUE) Executable files$(GREEN)  => Cleaned$(SET_COLOR)"
# 			@echo -e " 🗑️$(SET_COLOR)"

# re:		fclean all
# 			@echo -e "\n$(BG_GREEN) => Cleaned and rebuilt everything <= $(SET_COLOR)"

# valgrind: all
# 	valgrind --leak-check=full --show-reachable=yes --show-leak-kinds=all --error-limit=no --gen-suppressions=all --track-origins=yes --log-file=project.log ./phoneBook 
#	cat project.log

# .PHONY:	all start clean fclean re
