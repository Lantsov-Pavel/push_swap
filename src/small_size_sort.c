#include "../includes/push_swap.h"

static void    equal_three_nodes(t_node **stack, int first, int second, int third)
{
    if(first < second && second > third && first < third )
    {
        swap_a(stack);
        rotate_a(stack);
    }
    else if(first > second &&  second > third && first > third )
    {
        rotate_a(stack);
        swap_a(stack);
    }
    else if(first > second &&  second < third && first > third )
    {
        rotate_a(stack);
    }
    else if(first > second &&  second < third && first < third )
    {
        swap_a(stack);
    }
    else if(first > second && second < third && first > third )
    {
        reverse_rotate_a(stack);
    }
}
void    sort_two_nodes(t_node **stack)
{
    if((*stack)->value > (*stack)->next->value)
        swap_a(stack);
}
void    sort_three_nodes(t_node **stack)
{
    int first;
    int second;
    int third;

    first = (*stack)->value;
    second = (*stack)->next->value;
    third = (*stack)->next->next->value;
    equal_three_nodes(stack, first, second, third);
}
