# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 14:06:17 by oozsertt          #+#    #+#              #
#    Updated: 2023/05/11 01:14:15 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp \

OBJS = main.o PmergeMe.o \

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