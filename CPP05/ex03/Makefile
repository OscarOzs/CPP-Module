# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 17:44:04 by oozsertt          #+#    #+#              #
#    Updated: 2022/10/24 17:47:20 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Forms.exe

SRCS = main.cpp \
Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp Intern.cpp

OBJS = main.o \
Bureaucrat.o Form.o ShrubberyCreationForm.o RobotomyRequestForm.o \
PresidentialPardonForm.o Intern.o

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