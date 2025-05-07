#include "../includes/push_swap.h"

void sort(t_node **a_stack, t_node **b_stack)
{
    int size;

    size = stack_size(*a_stack);
    if (size == 2)
        sort_two_nodes(a_stack);
    else if (size == 3)
        sort_three_nodes(a_stack);
    else if (size == 4)
        sort_four_nodes(a_stack, b_stack);
    else if (size == 5)
        sort_five_nodes(a_stack, b_stack);
    else
    index_stack(a_stack);
    print_stack(*a_stack);
        radix_sort(a_stack, b_stack);
}