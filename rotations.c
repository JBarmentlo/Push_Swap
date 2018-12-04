#include "stack.h"
#include <string.h>

void	ft_ra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL)
		return ;
	i = stack->top;
	if (i == 0)
		return ;
	tmp = stack->array[stack->top];
	while (i)
	{
		stack->array[i] = stack->array[i - 1];
		i--;
	}
	stack->array[i] = tmp;
}

void	ft_rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->top == 0)
		return ;
	i = 0;
	tmp = stack->array[0];
	while (i < stack->top)
	{
		stack->array[i] = stack->array[i + 1];
		i++;
	}
	stack->array[i] = tmp;
}

void ft_rb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->top == stack->high)
		return ;
	i = stack->top + 1;
	tmp = stack->array[stack->top + 1];
	while (i < stack->high)
	{
		stack->array[i] = stack->array[i + 1];
		i++;
	}
	stack->array[i] = tmp;
}

void 	ft_rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->top == stack->high)
		return ;
	i = stack->high;
	tmp = stack->array[stack->high];
	while (i > stack->top + 1)
	{
		stack->array[i] = stack->array[i - 1];
		i--;
	}
	stack->array[i] = tmp;
}
