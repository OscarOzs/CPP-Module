# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 19:54:22 by oozsertt          #+#    #+#              #
#    Updated: 2022/05/17 20:05:07 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone.exe

SRCS = megaphone.cpp

OBJS = megaphone.o

BUILD = .build

OBJ_DIR = .obj

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(BUILD)
	c++ $(FLAGS) $(SRCS) -c
	c++ $(FLAGS) $(OBJS) -o $(NAME)
	@mv $(OBJS) $(OBJ_DIR)

$(BUILD) :
	@mkdir $(OBJ_DIR)

clean :
	@rm -rf $(OBJ_DIR)
	
fclean : clean
	@rm -rf $(NAME)
	
re : fclean all