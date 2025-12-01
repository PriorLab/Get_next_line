# **************************************************************************** #
#                                   MAKEFILE                                   #
# **************************************************************************** #

NAME        = gnl

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

# Ficheiros do GNL
SRC         = get_next_line.c \
              get_next_line_utils.c

# Se tiveres um main.c para testar, mete-o aqui:
TEST        = main.c

OBJ         = $(SRC:.c=.o) $(TEST:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Executable '$(NAME)' created!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "Object files removed."

fclean: clean
	rm -f $(NAME)
	@echo "Executable removed."

re: fclean all

.PHONY: all clean fclean re
