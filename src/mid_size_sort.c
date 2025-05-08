#include "../includes/push_swap.h"

static int	find_minimal_position(t_node *stack)
{
    int position;
    int min_value;
    int i;

    if(!stack)
        return (-1);
    position = 0;
    min_value = stack->value;
    i = 0;
    while (stack)
    {
        if (stack->value < min_value)
        {
            min_value = stack->value;
            position = i;
        }
        stack = stack->next;
        i++;
    }
    return position;
}
static void	put_on_top_min(int min_position, t_node **stack_a)
{
    int size;
    
    size = stack_size(*stack_a);
    if(min_position == 0)
        return;
    else if (min_position == 1)
        rotate_a(stack_a);
    else if (min_position == 2 && size ==4)
    {
        rotate_a(stack_a);
        rotate_a(stack_a);
    }
    else if((min_position == 2 && size == 5)||(min_position == 3))
        reverse_rotate_a(stack_a);
    else if (min_position == 4)
    {
        reverse_rotate_a(stack_a);
        reverse_rotate_a(stack_a);
    }
}

void	sort_four_nodes(t_node **stack_a, t_node **stack_b)
{
    int min_position;

    min_position = find_minimal_position((*stack_a));
    put_on_top_min(min_position, stack_a);
    push_b(stack_a, stack_b);
    sort_three_nodes(stack_a);
    push_a(stack_a, stack_b);
}

void	sort_five_nodes(t_node **stack_a, t_node **stack_b)
{
    int	first_min_position;
    int	second_min_position;

    first_min_position = find_minimal_position((*stack_a));
    put_on_top_min(first_min_position, stack_a);
    push_b(stack_a, stack_b);
    second_min_position = find_minimal_position((*stack_a));
    put_on_top_min(second_min_position, stack_a);
    push_b(stack_a, stack_b);
    sort_three_nodes(stack_a);
    push_a(stack_a, stack_b);
    push_a(stack_a, stack_b);
}
