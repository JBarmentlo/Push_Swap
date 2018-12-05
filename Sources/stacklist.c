#include "stack.h"
#include <libc.h>

t_stacklist *new_stacklist(t_stack stack, t_lstr *lstr)
{
	t_stacklist *new;

	new = (t_stacklist*)malloc(sizeof(t_stacklist));
	new->stack = stack;
	new->lstr = lstr;
	new->next = NULL;
	return (new);
}

void pushfront_stacklist(t_stacklist **first, t_stacklist *node)
{
	if (*first == NULL)
		*first = node;
	else
	{
		node->next = *first;
		*first = node;
	}
}

int 	apply_list(t_stacklist *it, t_stacklist **writelist)
{
	return(apply(it->stack, writelist, &ft_sa_nxt, it->lstr) ||	apply(it->stack, writelist, &ft_sb_nxt, it->lstr) ||
	apply(it->stack, writelist, &ft_pa_nxt, it->lstr) || apply(it->stack, writelist, &ft_pb_nxt, it->lstr) ||
	apply(it->stack, writelist, &ft_ra_nxt, it->lstr) || apply(it->stack, writelist, &ft_rb_nxt, it->lstr) ||
	apply(it->stack, writelist, &ft_rra_nxt, it->lstr) || apply(it->stack, writelist, &ft_rrb_nxt, it->lstr));
	it = it->next;
}
