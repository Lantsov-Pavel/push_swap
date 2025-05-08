#include "../includes/push_swap.h"

static void	swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}
void	swap_a(t_node **a_stack)
{
	swap(a_stack);
	ft_printf("sa\n");
}

void	swap_b(t_node **b_stack)
{
	swap(b_stack);
	ft_printf("sb\n");
}

void	swap_s(t_node **a_stack, t_node **b_stack)
{
	swap(a_stack);
	swap(b_stack);
	ft_printf("ss\n");
}
