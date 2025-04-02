#include "../includes/push_swap.h"

t_node	*create_node(int value)
{
	t_node *node;

	node = (t_node*)malloc(sizeof(t_node));
	if(!node)
		return NULL;
	node -> value = value;
	node -> next = NULL;
	return node;
}
void	add_node(t_node **head, int value)
{
	t_node *node;
	t_node *temp;

	node = create_node(value);
	if(!head)
	{
		head = node;
		return;
	}
	temp = head;   
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
}

