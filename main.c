#include "libft.h"
#include "stack.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack *stack;

	stack = new_stack(argv, argc);
	ft_ra(stack);
	ft_ra(stack);
	print_stack(stack);
	ft_rra(stack);
	ft_rra(stack);
	print_stack(stack);
	ft_pa(stack);
	ft_pa(stack);
	ft_pa(stack);
	print_stack(stack);
	ft_rb(stack);
	print_stack(stack);
	ft_rrb(stack);
	print_stack(stack);
	printf("\n");
}
