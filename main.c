#include "includes/push_swap.h"

int main(int argc, char **argv)
{
	t_node *head;
	char** s;
	int	i;
	int j;

	head = NULL;
	i = 1;
	while ( i < argc)
	{
		s = ft_split(argv[i], ' ');
		j = 0;
		while(s[j])
			{
				add_node(&head, ft_atoi(s[j]));
				free(s[j]);
				j++;
			}
			free(s);
			i++;
	}
	sort(&head);
	print_stack(head);
	ft_printf("\n%d\n", stack_size(head));
	return (0);
}
