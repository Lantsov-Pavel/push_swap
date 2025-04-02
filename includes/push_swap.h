#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"

t_node	*create_node(int value);
void	add_node(t_node **head, int value);

typedef struct 	s_node
{
	int value;
	struct s_node *next;
} t_node;

#endif