#include "includes/push_swap.h"

static void fill_stack(int argc, char **argv, t_node **a_stack)
{
	int		i;
	int		j;
	char	**s;

	i = 1;
	while (i < argc)
	{
		s = ft_split(argv[i], ' ');
		if(!s)
			exit_with_error();
		j = 0;
		while (s[j])
		{
			add_node(a_stack, ft_atoi(s[j]));
			free(s[j]);
			j++;
		}
		free(s[j]);
		i++;
	}
	free(s);
}

int main(int argc, char **argv)
{
	t_node *a_stack;
	t_node *b_stack;

	check_errors(argc, argv);
	a_stack = NULL;
	b_stack = NULL;
	fill_stack(argc, argv, &a_stack);
	sort(&a_stack, &b_stack);
	if(a_stack)
		free_stack(&a_stack);
	if(b_stack)
		free_stack(&b_stack);
	return (0);
}
