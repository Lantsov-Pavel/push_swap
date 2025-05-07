#include "../includes/push_swap.h"

static void	swap(t_node **head)
{
	t_node *first;
	t_node *second;

	if (*head == NULL || (*head)->next == NULL)
		return;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
}
void	swap_a(t_node **head)
{
	swap(head);
	ft_printf("sa\n");
}

void	swap_b(t_node **head)
{
	swap(head);
	ft_printf("sb\n");
}

void	swap_s(t_node **a_head, t_node **b_head)
{
	swap(a_head);
	swap(b_head);
	ft_printf("ss\n");
}
