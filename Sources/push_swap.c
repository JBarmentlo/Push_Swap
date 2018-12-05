#include "stack.h"
#include "libft.h"
#include <stdio.h>

int		is_sorted(t_stack *stack)
{
	return (1);
}

void sort_step(t_stack **stack)
{
	if ((*stack)->array[(*stack)->top] < (*stack)->array[(*stack)->top - 1])
		ft_sa((*stack));
	else if ((*stack)->array[(*stack)->top] > (*stack)->array[(*stack)->top + 1])
		ft_pa((*stack));
	else if ((*stack)->array[(*stack)->top] < (*stack)->array[(*stack)->top + 1])
		ft_pb((*stack));
}
