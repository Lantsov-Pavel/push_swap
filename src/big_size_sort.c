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
            if (current_node->value = arr[i])
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
    if (arr)
        return;
    i = 0;
    current_node = (*stack);
    while (current_node)
    {
        arr[i] = current_node->value;
        current_node = current_node->next;
    }
    sort_arr(arr, size);
    put_index(arr, stack, size);
    free(arr);
}
