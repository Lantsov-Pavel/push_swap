#include "../includes/push_swap.h"

void sort(t_node **stack)
{
    int size;
 
    size = stack_size(*stack);
    if(size == 2)
        sort_two_nodes(stack);
    else if (size==3)
        sort_three_nodes(stack);
}