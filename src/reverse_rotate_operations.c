#include "../includes/push_swap.h"

static void	reverse_rotate(t_node **stack)
{
	t_node *previous;
	t_node *current;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	previous = *stack;
	current = *stack;
	while (current->next)
	{
		previous = current;
		current = current->next;
	}
	previous->next = NULL;
	current->next = *stack;
	*stack = current;
}

void	reverse_rotate_a(t_node **a_stack)
{
	reverse_rotate(a_stack);
	ft_printf("rra\n");
}
void	reverse_rotate_b(t_node **b_stack)
{
	reverse_rotate(b_stack);
	ft_printf("rrb\n");
}
void	reverse_rotate_r(t_node **a_stack, t_node **b_stack)
{
	reverse_rotate(a_stack);
	reverse_rotate(b_stack);
	ft_printf("rrr\n");
}
