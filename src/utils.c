#include "../includes/push_swap.h"

void	exit_with_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

long	ft_atol(const char *str)
{
	int		i;
	long	result;
	long	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	print_stack(t_node *stack)
{
	while (stack)
	{
		ft_printf("value = %d    ", stack->value);
		ft_printf("index = %d\n", stack->index);
		stack = stack->next;
	}
}
