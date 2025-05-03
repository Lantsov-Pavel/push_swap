#include "../includes/push_swap.h"

static void sort_arr(int *arr, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

static void put_index(int *arr, t_node **stack, int size)
{
    t_node *current_node;
    int i;

    current_node = (*stack);
    while (current_node)
    {
        i = 0;
        while (i < size)
        {
            if (current_node->value == arr[i])
            {
                current_node->index = i;
                break;
            }
            i++;
        }
        current_node = current_node->next;
    }
}

static void index_stack(t_node **stack)
{
    t_node *current_node;
    int *arr;
    int size;
    int i;

    size = stack_size(*stack);
    arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return;
    i = 0;
    current_node = (*stack);
    while (current_node)
    {
        arr[i] = current_node->value;
        current_node = current_node->next;
        i++;
    }
    sort_arr(arr, size);
    put_index(arr, stack, size);
    free(arr);
}

static void put_nodes_back(t_node **stack_a, t_node **stack_b)
{
    while (*stack_b)
        push_a(stack_a, stack_b);
}

void radix_sort(t_node **stack_a, t_node **stack_b)
{
    int size;
    int max_bits;
    int i;
    int j;

    size = stack_size(*stack_a);
    index_stack(stack_a);
    max_bits = 0;
    while ((size - 1) >> max_bits)
        max_bits++;
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            if ((((*stack_a)->index >> i) & 1) == 0 )
                push_b(stack_a, stack_b);
            else
                rotate_a(stack_a);
            j++;
        }
        put_nodes_back(stack_a, stack_b);
        i++;
    }
}
