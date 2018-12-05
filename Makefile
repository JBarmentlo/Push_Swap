NAME=Push_Swap
SOURCES=stack.c push_swap.c rotations.c operations.c main.c
OBJ_FOLDER=out
OUT=$(addprefix $(OBJ_FOLDER)/,$(SOURCES:.c=.o))
CFLAGS=-Wall -Werror -Wextra

all: $(OUT) $(NAME)

$(NAME) : $(OUT)
	gcc $(CFLAGS) -o $(NAME) $(OUT) libft/libft.a

$(OBJ_FOLDER)/%.o: Sources/%.c
	@mkdir -p $(OBJ_FOLDER)
	gcc $(CFLAGS) -I Includes -I libft/includes -o $@ -c $<

clean:
	rm -rf $(OBJ_FOLDER)

fclean: clean
		rm -rf $(NAME)

re: fclean all
