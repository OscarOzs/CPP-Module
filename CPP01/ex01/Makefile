# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 16:33:05 by oozsertt          #+#    #+#              #
#    Updated: 2022/09/22 08:50:18 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies.exe

SRCS = main.cpp \
Zombie.cpp zombieHorde.cpp

OBJS = main.o \
Zombie.o zombieHorde.o

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