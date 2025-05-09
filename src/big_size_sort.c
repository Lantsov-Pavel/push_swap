#include "../includes/push_swap.h"

static void	put_nodes_back(t_node **stack_a, t_node **stack_b)
{
	while (*stack_b)
		push_a(stack_a, stack_b);
}

static void	sort_condition(t_node **stack_a, t_node **stack_b, int i)
{
	if ((((*stack_a)->index >> i) & 1) == 0)
		push_b(stack_a, stack_b);
	else
		rotate_a(stack_a);
}

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	size = stack_size(*stack_a);
	index_stack(stack_a);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			sort_condition(stack_a, stack_b, i);
			j++;
		}
		put_nodes_back(stack_a, stack_b);
		i++;
	}
}
