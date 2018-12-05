
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

void 	print_stack(t_stack *stack)
{
	int	a;
	int	b;
	int k;

	if (stack == NULL)
		return ;
	a = stack->top;
	b = stack->high - stack->top - 1;
	k = stack->high;
	ft_putstr("A\tB\n\n");
	k++;
	while(k--)
	{
		if (k == a)
		{
			ft_putnbr(stack->array[a]);
			a--;
		}
		ft_putchar('\t');
		if (k == b)
		{
			ft_putnbr(stack->array[stack->high - b]);
			b--;
		}
		ft_putchar('\n');
	}
}

int		is_sorted(t_stack *stack)
{
	int 	i;
	if (stack == NULL)
		return (-1);
	if (stack->top != stack->high)
		return (0);
	i = 1;
	while (i <= stack->high)
	{
		if (stack->array[i] > stack->array[i - 1] )
			return (0);
		i++;
	}
	return (1);
}

int		score(t_stack *stack)
{
	int	i;
	int	j;
	int cmp;
	int	score;

	i = 0;
	score = 0;
	while (i < stack->high)
	{
		j = i + 1;
		cmp = stack->array[i];
		while (j <= stack->high)
		{
			if (stack->array[j] > stack->array[i])
				score++;
			j++;
		}
		i++;
	}
	return (score);
}
