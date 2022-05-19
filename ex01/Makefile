NAME = PhoneBook.exe

SRCS_PATH =	$(shell find srcs -type d)

OBJ_DIR = $(BUILD)/obj

INC_DIR = $(shell find includes -type d) \

BUILD = .build

vpath %.cpp $(foreach dir, $(SRCS_PATH), $(dir):)

SRCS =  PhoneBook.cpp

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

C++FLAGS =	-Wall -Wextra -Werror -std=c++98

IFLAGS		=	$(foreach dir, $(INC_DIR), -I $(dir))

TEST = 

all : $(NAME)

$(NAME) : $(TEST) $(OBJS)
	@c++ $(C++FLAGS) $(OBJS) -o $(NAME)
	@echo "Executable successfully created\n"

$(OBJ_DIR)/%.o : %.cpp | $(BUILD)
	@c++ $(C++FLAGS) -c $< $(IFLAGS) -o $@

$(BUILD):
	@mkdir $@ $(OBJ_DIR)
	@echo "Object directory created\n"
	@echo "Compiling..\n"

clean :
	@rm -rf $(BUILD)
	@echo "Object directory deleted\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "Executable removed\n"

re : fclean all