#include "stack.h"
#include "libft.h"
#include <stdio.h>
#include <libc.h>

int		apply(t_stack stack, t_stacklist **first, void (*f)(t_stack*, t_lstr*), t_lstr *prev)
{
	t_lstr	*lstr;
	int 	scor;

	lstr = (t_lstr*)malloc(sizeof(t_lstr));
	lstr->str = NULL;
	lstr->prev = prev;
	scor = score(&stack);

	if (is_sorted(&stack))
	{
		print_lstr(&lstr);
		return (1);
	}
	f(&stack, lstr);
/*
	if (scor < 3)
	{
		printf("%d %d\n",score(&stack), scor );
		print_stack(&stack);
		ft_putchar('\n');
	}
*/
	if (score(&stack) <= scor)
		pushfront_stacklist(first, new_stacklist(stack, lstr));
	return (0);
}
