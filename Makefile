NAME = ft_retro

FILES = main.cpp
OBJS	= $(FILES:%.cpp=.obj/%.o)
FLAGS = -Wall -Werror -Wextra
INC = *.cpp
LIB = -lncurses
CC = clang++

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME) -lncurses

.obj/%.o: %.cpp
	@mkdir -p .obj
	@clang++ -c $< -o $@ $(FLAGS)
	@echo "                .        ___---___                    ."
	@echo "       .              .--\        --.     .     .         ."
	@echo "                    ./.;_.\     __/~ \."
	@echo "                   /;  / `-'  __\    . \"
	@echo " .        .       / ,--'     / .   .;   \ "
	@echo "                 | .|       /       __   |      -O-       ."
	@echo -n .
	@echo "\n"

clean:
	@rm -rf .obj

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
