#include "../includes/push_swap.h"

/*
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
*/

void push(t_node **src_head, t_node **dest_head)
{
    t_node *first;

    first = *src_head;
    *src_head = first->next;

    first->next = *dest_head;
    *dest_head = first;
}
void push_a(t_node **a_head, t_node **b_head)
{
    push(a_head,b_head);
    ft_printf("pa\n");
}
void push_b(t_node **a_head, t_node **b_head)
{
    push(b_head, a_head);
    ft_printf("pb\n");
}