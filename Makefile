NAME = ft_retro

FILES = *.cpp
OBJS = $(FILE:%.cpp=.obj/%.o)
INC = *.hpp
FLAGS = -Wall -Werror -Wextra
LIB = -lncurses
CC = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LIB)
	
.obj/%.o: %.cpp
	mkdir -p .obj
	$(CC) $< -o $O $(FLAGS)
	echo -n .

clean:
	rm -rf .obj

fclean: clean
	rm -rf $(NAME)
	echo "yo"

re: fclean all

.PHONY: all clean fclean re
