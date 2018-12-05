NAME=Push_Swap
SOURCES=stack.c push_swap.c rotations.c operations.c
OBJ_FOLDER=out
OUT=$(addprefix $(OBJ_FOLDER)/,$(SOURCES:.c=.o))
CFLAGS=-Wall -Werror -Wextra

all: $(OUT) $(NAME)

$(NAME) : $(OUT)
	gcc $(CFLAGS) -o $(NAME) $(OUT) -L libft/ -lft

$(OBJ_FOLDER)/%.o: SOURCES/%.c
	@mkdir $(OBJ_FOLDER) -p
	gcc $(CFLAGS) -o $@ -c $< -L libft/ -lft

clean:
	rm -rf $(OBJ_FOLDER)

fclean: clean
		rm -rf $(NAME)

re: fclean all
