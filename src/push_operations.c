#include "../includes/push_swap.h"

static void	push(t_node **src_head, t_node **dest_head)
{
	t_node	*first;

	if (!src_head || !*src_head)
		return;

	first = *src_head;
	*src_head = first->next;
	first->next = *dest_head;
	*dest_head = first;
}

void	push_a(t_node **a_stack, t_node **b_stack)
{
	push(b_stack, a_stack);
	ft_printf("pa\n");
}

void	push_b(t_node **a_stack, t_node **b_stack)
{
	push(a_stack, b_stack);
	ft_printf("pb\n");
}
