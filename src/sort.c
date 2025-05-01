#include "../includes/push_swap.h"

void sort(t_node **stack_a, t_node **stack_b)
{
    int size;

    size = stack_size(*stack_a);
    if (size == 2)
        sort_two_nodes(stack_a);
    else if (size == 3)
        sort_three_nodes(stack_a);
    else if (size == 4)
        sort_four_nodes(stack_a, stack_b);
    else if (size == 5)
        sort_five_nodes(stack_a, stack_b);
}