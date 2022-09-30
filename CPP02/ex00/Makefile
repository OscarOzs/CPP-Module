# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 15:08:52 by oozsertt          #+#    #+#              #
#    Updated: 2022/09/29 15:09:42 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CanonicalClass.exe

SRCS = main.cpp \
Fixed.cpp

OBJS = main.o \
Fixed.o

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