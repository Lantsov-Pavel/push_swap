#include "../includes/push_swap.h"

t_node	*create_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	add_node(t_node **head, int value)
{
	t_node	*node;
	t_node	*temp;

	node = create_node(value);
	if (!node)
		return ;
	if (*head == NULL)
	{
		*head = node;
		return ;
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}

int	stack_size(t_node *stack)
{
	int	size;

	if (!stack)
		return (0);
	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	free_stack(t_node **stack)
{
	t_node	*node;
	t_node	*next;

	if (!stack || !(*stack))
		return ;
	node = *stack;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*stack = NULL;
}
