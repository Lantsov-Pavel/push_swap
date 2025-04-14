#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"

t_node	*create_node(int value);
void	add_node(t_node **head, int value);
void	push(t_node **src_head, t_node **dest_head);
void    rotate(t_node **head);
void    reverse_rotate(t_node **head);
void swap(t_node **head);


typedef struct 	s_node
{
	int value;
	struct s_node *next;
} t_node;

#endif