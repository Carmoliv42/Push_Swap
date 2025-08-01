#include "push_swap.h"

int	ps_order(t_stack **stack)
{
	int	i;
	t_stack *stack_b;

	if (!stack || !*stack)
		return (NULL);
	stack_b = (t_stack *)malloc(sizeof(*stack_b));
	if(!stack)
		return (NULL);
	i = 0;
	stack_b[i] = stack[i]; 
	while (stack[i])
	{
		if (stack[])
	}

}