#include "stack.h"
#include "libft.h"
#include <stdio.h>

void 	print_lstr(t_lstr **lstr)
{
	if (*lstr == NULL)
		return ;
	print_lstr(&((*lstr)->prev));
	ft_putstr((*lstr)->str);
	ft_putchar('\n');
}

void 	shit_disp(t_lstr **lstr)
{
	while (*lstr)
	{
		printf("%s\n", (*lstr)->str);
		(*lstr) = (*lstr)->prev;
	}
}
