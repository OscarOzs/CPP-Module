# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 13:29:45 by oozsertt          #+#    #+#              #
#    Updated: 2022/09/20 13:42:26 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook.exe

SRCS = PhoneBook.cpp \
PhoneBook.class.cpp Contact.class.cpp \

OBJS = PhoneBook.o \
PhoneBook.class.o Contact.class.o \

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