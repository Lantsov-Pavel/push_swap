#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <limits.h>
#include "libft/libft.h"

typedef struct s_node
{
	int value;
	int index;
	struct s_node *next;
} t_node;

t_node *create_node(int value);
void add_node(t_node **head, int value);
void check_errors(int argc, char **argv);
void print_stack(t_node *head);
long ft_atol(const char *str);
void exit_with_error();
void index_stack(t_node **stack);
void push_a(t_node **a_head, t_node **b_head);
void push_b(t_node **a_head, t_node **b_head);
void rotate_a(t_node **head_a);
void rotate_b(t_node **head_b);
void rotate_r(t_node **head_a, t_node **head_b);
void reverse_rotate_a(t_node **head_a);
void reverse_rotate_b(t_node **head_b);
void reverse_rotate_r(t_node **head_a, t_node **head_b);
void swap_a(t_node **head);
void swap_b(t_node **head);
void swap_s(t_node **a_head, t_node **b_head);
int stack_size(t_node *stack);
void sort(t_node **stack_a, t_node **stack_b);
void sort_two_nodes(t_node **stack);
void sort_three_nodes(t_node **stack);
void swap_a(t_node **head_a);
void radix_sort(t_node **stack_a, t_node **stack_b);
void rotate_a(t_node **head_a);
void reverse_rotate_a(t_node **head_a);
void sort_four_nodes(t_node **stack_a, t_node **stack_b);
void sort_five_nodes(t_node **stack_a, t_node **stack_b);

#endif