
#include "stack.h"
#include "libft.h"
#include <libc.h>

t_stack	*new_stack(char	**av, int argc)
{
	t_stack	*out;

	if (argc == 1)
		return (NULL);
	if (!(out = (t_stack*)malloc(sizeof(t_stack))))
		return (NULL);
	if (!(out->array = (int*)malloc(sizeof(int) * (argc - 1))))
	{
		free(out);
		return (NULL);
	}
	out->high = argc - 2;
	out->top = argc - 2;
	while (argc)
	{
		out->array[argc - 1] = ft_atoi(av[out->top - argc + 2]);
		argc--;
	}
	return (out);
}

void	print_stack(t_stack *stack)
{
	int	i;
	int	j;

	if (stack == NULL)
		return ;
	i = stack->top;

	j = stack->high - stack->top - 1;
	ft_putstr("A\tB\n\n");
	while (i > j)
	{
		ft_putnbr(stack->array[i]);
		ft_putchar('\n');
		i--;
	}
	while (j > i)
	{
		ft_putnbr(stack->array[stack->high - j]);
		ft_putchar('\n');
		j--;
	}
	while (i != -1)
	{
		ft_putnbr(stack->array[i]);
		ft_putchar('\t');
		ft_putnbr(stack->array[stack->high - j]);
		ft_putchar('\n');
		i--;
		j--;
	}
}
