#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a_stack;
	t_node	*b_stack;
	char	**s;
	int		i;
	int		j;

	check_errors(argc, argv);
	a_stack = NULL;
	b_stack = NULL;
	i = 1;
	while (i < argc)
	{
		s = ft_split(argv[i], ' ');
		j = 0;
		while (s[j])
		{
			add_node(&a_stack, ft_atoi(s[j]));
			free(s[j]);
			j++;
		}
		free(s);
		i++;
	}
	sort((&a_stack), (&b_stack));
	// print_stack(a_stack);
	return (0);
}
