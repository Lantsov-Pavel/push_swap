#include "../includes/push_swap.h"

void exit_with_error()
{
    ft_printf("Error\n");
    exit(1);
}
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
void index_stack(t_node **stack)
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

long ft_atol(const char *str)
{
    int i;
    long result;
    long sign;

    i = 0;
    result = 0;
    sign = 1;
    while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
        return (0);
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}