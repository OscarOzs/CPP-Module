# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 10:43:51 by oozsertt          #+#    #+#              #
#    Updated: 2022/09/21 10:50:27 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie.exe

SRCS = main.cpp \
newZombie.cpp randomChump.cpp Zombie.cpp \

OBJS = main.o \
newZombie.o randomChump.o Zombie.o \

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(BUILD)
	c++ $(FLAGS) $(SRCS) -c
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean :
	@rm -rf $(OBJS)
	
fclean : clean
	@rm -rf $(NAME)
	
re : fclean all