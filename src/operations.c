#include "../includes/push_swap.h"

void	push(t_node **src_head, t_node **dest_head)
{
	t_node	*first;

	first = *src_head;
	*src_head = first->next;

	first->next = *dest_head;
	*dest_head = first;
}
void swap(t_node **head)
{
	if(*head == NULL||(*head)->next == NULL)
	{
		return;
	}

	t_node *first;
	t_node *second;

	first = *head;    
	second = first->next;
	
	first->next = second->next;
	second->next = first;
	*head = second;
}
void    rotate(t_node **head)
{
    if(*head == NULL || (*head) -> next == NULL)
    {
        return;
    }
    t_node* first;
    t_node* last;

    first == *head;
    last == *head;
    while(last->next)
    {
        last = last -> next;
    }

    *head = first->next;
    first->next = NULL;
    last->next = first;
}
void    reverse_rotate(t_node **head)
{
    if(*head == NULL || (*head) -> next == NULL)
    {
        return;
    }
    t_node* previos;
    t_node* current;
    
    previos == *head;
    current == *head;

    while (current->next)
    {
        previos = current;
        current = current->next;
    }
    previos->next = NULL;
    current->next = *head;
    *head = current;
}