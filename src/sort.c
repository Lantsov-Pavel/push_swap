#include "../includes/push_swap.h"

static void	sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

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

static void	put_index(int *arr, t_node **stack, int size)
{
	t_node	*current_node;
	int		i;

	current_node = (*stack);
	while (current_node)
	{
		i = 0;
		while (i < size)
		{
			if (current_node->value == arr[i])
			{
				current_node->index = i;
				break ;
			}
			i++;
		}
		current_node = current_node->next;
	}
}

void	index_stack(t_node **stack)
{
	t_node	*current_node;
	int		*arr;
	int		size;
	int		i;

	size = stack_size(*stack);
	if (size <= 0)
		return ;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return ;
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

void	sort(t_node **a_stack, t_node **b_stack)
{
	int	size;

	if (!(*a_stack))
		return ;
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
	{
		index_stack(a_stack);
		radix_sort(a_stack, b_stack);
	}
}
