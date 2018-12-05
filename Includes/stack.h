
typedef struct	s_stack
{
	int	top;
	int	high;
	int	*array;
}				t_stack;

typedef struct		s_lstr
{
	char			*str;
	struct s_lstr	*prev;
}					t_lstr;

typedef struct			s_stacklist
{
	t_stack        		stack;
	t_lstr				*lstr;
	struct s_stacklist	*next;
}						t_stacklist;

t_stack	*new_stack(char	**av, int argc);
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_pa(t_stack *stack);
void	ft_pb(t_stack *stack);
void	ft_ra(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rrb(t_stack *stack);

void	ft_sa_nxt(t_stack *stack, t_lstr *lstr);
void	ft_sb_nxt(t_stack *stack, t_lstr *lstr);
void	ft_pa_nxt(t_stack *stack, t_lstr *lstr);
void	ft_pb_nxt(t_stack *stack, t_lstr *lstr);
void	ft_ra_nxt(t_stack *stack, t_lstr *lstr);
void	ft_rra_nxt(t_stack *stack, t_lstr *lstr);
void	ft_rb_nxt(t_stack *stack, t_lstr *lstr);
void	ft_rrb_nxt(t_stack *stack, t_lstr *lstr);
int		apply(t_stack stack, t_stacklist **first, void (*f)(t_stack*, t_lstr*), t_lstr *prev);
int 	apply_list(t_stacklist *it, t_stacklist **writelist);

void	print_stack(t_stack *stack);
void 	sort_step(t_stack **stack);
int		is_sorted(t_stack *stack);
int		score(t_stack *stack);

t_stacklist *new_stacklist(t_stack stack, t_lstr *lstr);
void pushfront_stacklist(t_stacklist **first, t_stacklist *node);


void 	print_lstr(t_lstr **lstr);
void 	shit_disp(t_lstr **lstr);
