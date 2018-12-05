
typedef struct	s_stack
{
	int	top;
	int	high;
	int	*array;
}				t_stack;


t_stack	*new_stack(char	**av, int argc);
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_pa(t_stack *stack);
void	ft_pb(t_stack *stack);
void	ft_ra(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	print_stack(t_stack *stack);
