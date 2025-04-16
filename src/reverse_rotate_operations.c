#include "../includes/push_swap.h"

void    reverse_rotate_a(t_node **head_a)
{
    reverse_rotate(head_a);
    ft_printf("rra\n");
}
void    reverse_rotate_b(t_node **head_b)
{
    reverse_rotate(head_b);
    ft_printf("rrb\n");
}
void    reverse_rotate_r(t_node **head_a, t_node **head_b)
{
    reverse_rotate(head_a);
    reverse_rotate(head_b);
    ft_printf("rrr\n");
}