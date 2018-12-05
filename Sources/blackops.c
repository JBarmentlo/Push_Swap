#include "stack.h"
#include "libft.h"
#include <libc.h>

void	ft_sa_nxt(t_stack *stack, t_lstr *lstr)
{
	ft_sa(stack);
	lstr->str = (char*)malloc(3);
	lstr->str[0] = 's';
	lstr->str[1] = 'a';
	lstr->str[2] = '\0';
}
void	ft_sb_nxt(t_stack *stack, t_lstr *lstr)
{
	ft_sb(stack);
	lstr->str = (char*)malloc(3);
	ft_strcpy(lstr->str, "sb");
}

void	ft_pa_nxt(t_stack *stack, t_lstr *lstr)
{
	ft_pa(stack);
	lstr->str = (char*)malloc(3);
	ft_strcpy(lstr->str, "pa");
}

void	ft_pb_nxt(t_stack *stack, t_lstr *lstr)
{
	ft_pb(stack);
	lstr->str = (char*)malloc(3);
	ft_strcpy(lstr->str, "pb");
}

void	ft_ra_nxt(t_stack *stack, t_lstr *lstr)
{
	ft_ra(stack);
	lstr->str = (char*)malloc(3);
	ft_strcpy(lstr->str, "ra");
}

void	ft_rra_nxt(t_stack *stack, t_lstr *lstr)
{
	ft_rra(stack);
	lstr->str = (char*)malloc(4);
	ft_strcpy(lstr->str, "rra");
}

void	ft_rb_nxt(t_stack *stack, t_lstr *lstr)
{
	ft_rb(stack);
	lstr->str = (char*)malloc(3);
	ft_strcpy(lstr->str, "rb");
}

void	ft_rrb_nxt(t_stack *stack, t_lstr *lstr)
{
	ft_rrb(stack);
	lstr->str = (char*)malloc(4);
	ft_strcpy(lstr->str, "rrb");
}
