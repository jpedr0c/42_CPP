# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 11:57:33 by jocardos          #+#    #+#              #
#    Updated: 2023/01/23 11:57:33 by jocardos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL			= /bin/bash

NAME				= megaphone
CC					= c++
CPPFLAGS			= -Wall -Werror -Wextra -std=c++98
RM					= rm -rf

#Styles
SET_COLOR	= \033[0:39m
RED				= \033[0;31m
GREEN			= \033[0;32m
YELLOW		= \033[0;33m
BLUE			= \033[0;34m
MAGENTA		= \033[0;35m
CYAN			= \033[0;36m
GRAY			= \033[0;90m
L_RED			=	\033[0;91m
L_GREEN		=	\033[0;92m
L_YELLOW	=	\033[0;93m
L_BLUE		=	\033[0;94m
L_MAGENTA	=	\033[0;95m
L_CYAN		=	\033[0;96m
WHITE			= \033[0;97m
BG_GREEN	= \033[42;1;37m

#Sources
SRC_FILES			= megaphone

SRC = $(addsuffix .cpp, $(SRC_FILES))
OBJ = $(addsuffix .o, $(SRC_FILES))

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJF)
			@echo -e -n "$(YELLOW)[MODULE_00]:$(SET_COLOR)"
			@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
			@echo -e "$(L_GREEN) => Success ✅$(SET_COLOR)"

$(OBJ)%.o: $(SRC_DIR)%.cpp
			@echo -e -n "$(L_GREEN)✓$(SET_COLOR)"
			@$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean:
			@$(RM) $(OBJF)
			@$(RM) $(OBJ)
			@echo -e -n "$(MAGENTA)[MODULE_00]:$(SET_COLOR)$(BLUE) Object files$(SET_COLOR)$(GREEN)  => Cleaned$(SET_COLOR)"
			@echo -e " 🗑️$(SET_COLOR)"

fclean:		clean
			@$(RM) $(NAME)
			@$(RM) project.log
			@echo -e -n "$(MAGENTA)[MODULE_00]:$(SET_COLOR)$(BLUE) Executable files$(GREEN)  => Cleaned$(SET_COLOR)"
			@echo -e " 🗑️$(SET_COLOR)"

re:		fclean all
			@echo -e "\n$(BG_GREEN) => Cleaned and rebuilt everything <= $(SET_COLOR)"

valgrind: all
	valgrind --leak-check=full --show-reachable=yes --show-leak-kinds=all --error-limit=no --gen-suppressions=all --track-origins=yes  --log-file=project.log cat project.log

.PHONY:	all start clean fclean re
