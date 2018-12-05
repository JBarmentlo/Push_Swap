#include "libft.h"
#include "stack.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack *stack;

	stack = new_stack(argv, argc);

	int i = 10;
	while (i--)
	{
		sort_step(&stack);
		print_stack(stack);
		ft_putchar('\n');
	}

		//print_stack(stack);
	//	int i = stack->top + 1;
//printf("%d\n\n", i);
	/*	while (i <= stack->high)
		{
			printf("%d\n", stack->array[i]);
			i++;
		}*/
}
