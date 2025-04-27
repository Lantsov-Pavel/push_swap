#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"

typedef struct s_node
{
	int		value;
	struct	s_node *next;
} t_node;

t_node *create_node(int value);
void	add_node(t_node **head, int value);
void	print_stack(t_node *head);
void	push(t_node **src_head, t_node **dest_head);
void	rotate(t_node **head);
void	reverse_rotate(t_node **head);
void	swap(t_node **head);
int		stack_size(t_node *stack);
void	sort(t_node **stack);
void	sort_two_nodes(t_node **stack);
void	sort_three_nodes(t_node **stack);
void    swap_a(t_node **head_a);
void    rotate_a(t_node **head_a);
void    reverse_rotate_a(t_node **head_a);


#endif