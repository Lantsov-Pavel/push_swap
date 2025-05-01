#include "../includes/push_swap.h"

void rotate_a(t_node **head_a)
{
	rotate(head_a);
	ft_printf("ra\n");
}
void rotate_b(t_node **head_b)
{
	rotate(head_b);
	ft_printf("rb\n");
}

void rotate_r(t_node **head_a, t_node **head_b)
{
	rotate(head_a);
	rotate(head_b);
	ft_printf("rr\n");
}