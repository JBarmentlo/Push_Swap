make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o stack.o -c stack.c
clang -Wall -Wextra -Werror -I libft/includes -o operations.o -c operations.c
clang -Wall -Wextra -Werror -I libft/includes -o rotations.o -c rotations.c
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
clang -o push_swap main.o stack.o rotations.o operations.o -I libft/includes -L libft/ -lft
