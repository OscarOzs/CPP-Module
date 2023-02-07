# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 11:38:20 by oozsertt          #+#    #+#              #
#    Updated: 2023/02/07 16:02:44 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScalarConversion

SRCS_PATH =	$(shell find srcs -type d)

OBJ_DIR = $(BUILD)/obj

INC_DIR = $(shell find includes -type d) \

BUILD = .build

vpath %.cpp $(foreach dir, $(SRCS_PATH), $(dir):)

SRCS = 	main.cpp ScalarConversion.cpp

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

CFLAGS = -std=c++98 -Wall -Wextra -Werror

BFLAGS =	-DBONUS=1
NOBFLAGS =	-DBONUS=0

IFLAGS		=	$(foreach dir, $(INC_DIR), -I $(dir))

all :
	@make BONUS=$(NOBFLAGS) $(NAME)

$(NAME) : $(OBJS)
	@c++ $(CFLAGS) $(BONUS) $(OBJS) -o $(NAME)
	@echo "Executable successfully created\n"

$(OBJ_DIR)/%.o : %.cpp | $(BUILD)
	@c++ $(CFLAGS) $(BONUS) -c $< $(IFLAGS) -o $@

$(BUILD):
	@mkdir $@ $(OBJ_DIR)
	@echo "Object directory created\n"
	@echo "Compiling..\n"

clean :
	@rm -rf $(BUILD)
	@echo "Object directory deleted\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "Executable removed\n"

bonus : fclean
	@make BONUS=$(BFLAGS) $(NAME)

re : fclean all