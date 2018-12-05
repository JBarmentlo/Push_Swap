#include "libft.h"
#include "stack.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack *stack;

	stack = new_stack(argv, argc);
/*
	ft_ra(stack);
	ft_ra(stack);
	//print_stack(stack);
	//printf("\n");
	ft_rra(stack);
	ft_rra(stack);
	//print_stack(stack);
	//printf("\n");
	ft_pa(stack);
	ft_pa(stack);
	ft_pa(stack);
	//print_stack(stack);
	//printf("\n");
	ft_rb(stack);
	//print_stack(stack);
	//printf("\n");
	ft_rrb(stack);
	//print_stack(stack);
	//printf("\n");
	ft_pb(stack);
	//print_stack(stack);
*/

		print_stack(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pa(stack);
		ft_pa(stack);
		print_stack(stack);
		ft_pb(stack);
		ft_pb(stack);
		ft_pb(stack);
		ft_pb(stack);
		ft_pb(stack);
		ft_pb(stack);
		ft_pb(stack);
		ft_pb(stack);
		ft_pb(stack);
		print_stack(stack);

		//print_stack(stack);
	//	int i = stack->top + 1;
//printf("%d\n\n", i);
	/*	while (i <= stack->high)
		{
			printf("%d\n", stack->array[i]);
			i++;
		}*/
}
