#include "../includes/push_swap.h"

/*
+sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one element or none.
+sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one element or none.
+ss : sa and sb at the same time.
+pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
+pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.
*/

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

void swap_a(t_node **head)
{
	swap(head);
	ft_printf("sa\n");
}


void swap_b(t_node **head)
{
	swap(head);
	ft_printf("sb\n");
}

void swap_s(t_node **a_head, t_node **b_head)
{
	swap(a_head);
	swap(b_head);
	ft_printf("ss\n");
}

