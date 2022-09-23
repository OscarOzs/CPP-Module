# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 10:02:41 by oozsertt          #+#    #+#              #
#    Updated: 2022/09/22 10:05:20 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = attack.exe

SRCS = main.cpp \
HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = main.o \
HumanA.o HumanB.o Weapon.o

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