#include "libft.h"
#include "stack.h"
#include <libc.h>
#include <stdio.h>

int	main(int argc, char **argv)
{

	t_stack *stack;
	t_stacklist *slistone;
	t_stacklist *slistwo;
	t_stacklist **writelist;
	t_stacklist **dolist;
	t_stacklist **tmp;

	t_stacklist	*it;
	t_stacklist *prev;
	t_lstr 		*last_lstr;

	last_lstr = NULL;
	slistwo = NULL;
	slistone = NULL;
	writelist = &slistwo;

	stack = new_stack(argv, argc);
	pushfront_stacklist(&slistone, new_stacklist(*stack, last_lstr));
	it = slistone;
	dolist = &slistone;

	int applist;
	while (it && !(applist = apply_list(it, writelist)))
	{
		prev = it;
		it = it->next;
//		print_stack(&it->stack);
		if(it == NULL)
		{
			tmp = writelist;
			writelist = dolist;
			dolist = tmp;
			it = *dolist;
		}
	}
	printf("apls %d\n", applist);
	printf("ptr : %p\n", it);
	print_stack(&it->stack);
	printf("sorted : %d",is_sorted(&it->stack));


/*

	t_stack *stack;
	stack = new_stack(argv, argc);
	ft_pb(stack);
	print_stack(stack);

*/
}
