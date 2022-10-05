# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 17:53:19 by oozsertt          #+#    #+#              #
#    Updated: 2022/10/05 17:53:47 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap.exe

SRCS = main.cpp \
ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = main.o \
ClapTrap.o ScavTrap.o FragTrap.o

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