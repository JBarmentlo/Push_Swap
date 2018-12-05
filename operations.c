#include "stack.h"
#include <string.h>

#include <stdio.h>
void	ft_sa(t_stack *stack)
{
	int	tmp;
	if (stack == NULL)
		return ;
	if (stack->top < 1)
		return ;
	else
	{
		tmp = stack->array[stack->top];
		stack->array[stack->top] = stack->array[stack->top - 1];
		stack->array[stack->top - 1] = tmp;
	}
}

void	ft_sb(t_stack *stack)
{
	int	tmp;
	if (stack == NULL)
		return ;
	if (stack->top + 1 > stack->high - 1)
		return ;
	else
	{
		tmp = stack->array[stack->top + 1];
		stack->array[stack->top + 1] = stack->array[stack->top + 2];
		stack->array[stack->top + 1] = tmp;
	}
}

void	ft_pa(t_stack *stack)
{
	if (stack == NULL)
		return ;
	if (stack->top != -1)
		stack->top--;
}

void	ft_pb(t_stack *stack)
{
	if (stack == NULL)
		return ;
	if (stack->high == stack->top)
		stack->top++;
}
