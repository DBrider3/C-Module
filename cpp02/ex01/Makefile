CC = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = a.out

SRC =	main.cpp\
		Fixed.cpp

SRC_DIR = ./srcs/
SRCS = $(addprefix $(SRC_DIR),$(SRC))

OBJ = $(SRC:.cpp=.o)
OBJ_DIR = ./objs/
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CPPFLAGS) $^ \
		-o $@

$(OBJ_DIR)%.o : $(SRC_DIR)/%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CPPFLAGS) -o $@ -c $<

clean:
		$(RM) $(OBJ_DIR)

fclean: clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re