NAME = ft_retro

FILES = main.cpp
OBJS	= $(FILES:%.cpp=.obj/%.o)
	FLAGS = -Wall -Werror -Wextra
	INC = *.cpp
	LIB = -lncurses
	CC = clang++

all: $(NAME)

$(NAME): $(OBJS) aff
	@$(CC) $(OBJS) -o $(NAME) -lncurses

.obj/%.o: %.cpp
	@mkdir -p .obj
	@clang++ -c $< -o $@ $(FLAGS)

aff:
	@echo "\\033[1;32m"
	@echo "     _                 ( WELCOME TO THE RUSH 00 )"
	@echo "    /\ \                 ( HOPE YOUR ENJOY IT )"
	@echo "   \ \ \  \__/ \__/  /  ( LOVE YOU )"
	@echo "    \ \ \ (oo) (oo) /     ( <3 )"
	@echo "     \_\ \/~~\_/~~\_"
	@echo "    _.-~===========~-._"
	@echo "   (___/_______________)"
	@echo "      /  \_______/"
	@echo "\n"



clean:
	@rm -rf .obj

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
