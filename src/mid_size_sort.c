#include "../includes/push_swap.h"

static int	find_minimal_position(t_node *stack)
{
	int	position;
	int	min_value;
	int	i;

	if (!stack)
		return (-1);
	position = 0;
	min_value = stack->value;
	i = 0;
	while (stack)
	{
		if (stack->value < min_value)
		{
			min_value = stack->value;
			position = i;
		}
		stack = stack->next;
		i++;
	}
	return (position);
}

static void	put_on_top_min(int min_position, t_node **a_stack)
{
	int	size;

	size = stack_size(*a_stack);
	if (min_position == 0)
		return ;
	else if (min_position == 1)
		rotate_a(a_stack);
	else if (min_position == 2)
	{
		rotate_a(a_stack);
		rotate_a(a_stack);
	}
	else if (min_position == 3)
	{
		reverse_rotate_a(a_stack);
		if (size == 5)
			reverse_rotate_a(a_stack);
	}
	else if (min_position == 4)
		reverse_rotate_a(a_stack);
}

void	sort_four_nodes(t_node **a_stack, t_node **b_stack)
{
	int	min_position;

	min_position = find_minimal_position((*a_stack));
	put_on_top_min(min_position, a_stack);
	push_b(a_stack, b_stack);
	sort_three_nodes(a_stack);
	push_a(a_stack, b_stack);
}

void	sort_five_nodes(t_node **a_stack, t_node **b_stack)
{
	int	first_min_position;

	first_min_position = find_minimal_position(*a_stack);
	put_on_top_min(first_min_position, a_stack);
	push_b(a_stack, b_stack);
	sort_four_nodes(a_stack, b_stack);
	push_a(a_stack, b_stack);
}
