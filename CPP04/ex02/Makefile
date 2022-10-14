# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 09:12:51 by oozsertt          #+#    #+#              #
#    Updated: 2022/10/14 19:00:22 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AbstractClass.exe

SRCS = main.cpp \
AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS = main.o \
AAnimal.o Cat.o Dog.o Brain.o

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