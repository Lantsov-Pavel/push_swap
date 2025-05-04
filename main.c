#include "includes/push_swap.h"

int main(int argc, char **argv)
{
	t_node *stack_a;
	t_node *stack_b;
	char **s;
	int i;
	int j;

	check_errors(argc, argv);
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < argc)
	{
		s = ft_split(argv[i], ' ');
		j = 0;
		while (s[j])
		{
			add_node(&stack_a, ft_atoi(s[j]));
			free(s[j]);
			j++;
		}
		free(s);
		i++;
	}
	sort((&stack_a), (&stack_b));
	return (0);
}
