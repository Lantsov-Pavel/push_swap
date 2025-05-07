#include "../includes/push_swap.h"

static void rotate(t_node **stack)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	t_node *first;
	t_node *last;

	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}
void rotate_a(t_node **a_stack)
{
	rotate(a_stack);
	ft_printf("ra\n");
}
void rotate_b(t_node **b_stack)
{
	rotate(b_stack);
	ft_printf("rb\n");
}

void rotate_r(t_node **a_stack, t_node **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
	ft_printf("rr\n");
}