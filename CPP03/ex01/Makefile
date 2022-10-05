# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 17:07:59 by oozsertt          #+#    #+#              #
#    Updated: 2022/10/04 17:18:05 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap.exe

SRCS = main.cpp \
ClapTrap.cpp ScavTrap.cpp

OBJS = main.o \
ClapTrap.o ScavTrap.o

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