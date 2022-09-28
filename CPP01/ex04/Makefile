# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 12:57:00 by oozsertt          #+#    #+#              #
#    Updated: 2022/09/28 11:59:26 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed.exe

SRCS = main.cpp \
file_is_valid.cpp SedClass.cpp

OBJS = main.o \
file_is_valid.o SedClass.o

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