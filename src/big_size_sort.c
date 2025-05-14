#include "../includes/push_swap.h"

static void	put_nodes_back(t_node **a_stack, t_node **b_stack)
{
	while (*b_stack)
		push_a(a_stack, b_stack);
}

static void	sort_condition(t_node **a_stack, t_node **b_stack, int i)
{
	if ((((*a_stack)->index >> i) & 1) == 0)
		push_b(a_stack, b_stack);
	else
		rotate_a(a_stack);
}

void	radix_sort(t_node **a_stack, t_node **b_stack)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	size = stack_size(*a_stack);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			sort_condition(a_stack, b_stack, i);
			j++;
		}
		put_nodes_back(a_stack, b_stack);
		i++;
	}
}
