# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 09:23:01 by oozsertt          #+#    #+#              #
#    Updated: 2022/09/30 10:35:10 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FixedConverter.exe

SRCS = main.cpp \
Fixed.cpp

OBJS = main.o \
Fixed.o

FLAGS = -std=c++98 -Wall -Wextra 
#-Werror 

all : $(NAME)

$(NAME) : $(BUILD)
	c++ $(FLAGS) $(SRCS) -c
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean :
	@rm -rf $(OBJS)
	
fclean : clean
	@rm -rf $(NAME)
	
re : fclean all