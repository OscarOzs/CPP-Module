# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 12:19:57 by oozsertt          #+#    #+#              #
#    Updated: 2022/09/28 12:20:21 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl.exe

SRCS = main.cpp \
Harl.cpp

OBJS = main.o \
Harl.o

FLAGS = -std=c++98 -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(BUILD)
	c++ $(FLAGS) $(SRCS) -c
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean :
	@rm -rf $(OBJS)
	
fclean : clean
	@rm -rf $(NAME)
	
re : fclean all