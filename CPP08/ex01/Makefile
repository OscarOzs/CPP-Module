# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 07:24:23 by oozsertt          #+#    #+#              #
#    Updated: 2023/02/28 07:25:28 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

SRCS = main.cpp Span.cpp \

OBJS = main.o Span.o \

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