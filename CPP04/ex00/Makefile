# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 09:12:51 by oozsertt          #+#    #+#              #
#    Updated: 2022/10/13 09:12:30 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DognCat.exe

SRCS = main.cpp \
Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = main.o \
Animal.o Cat.o Dog.o WrongAnimal.o WrongCat.o

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