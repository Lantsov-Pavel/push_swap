#include "../includes/push_swap.h"

void push_a(t_node **a_head, t_node **b_head)
{
	push(b_head, a_head);
	ft_printf("pa\n");
}
void push_b(t_node **a_head, t_node **b_head)
{
	push(a_head, b_head);
	ft_printf("pb\n");
}