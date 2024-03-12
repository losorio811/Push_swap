#include "push_swap.h"

void	swap(t_node **stack)
{
	int	temp;

	if (!(*stack) || !((*stack)->next))
		return ;
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

void	push(t_node **stack_1, t_node **stack_2)
{

}

void	rotate(t_node **stack)
{

}

void	rrotate(t_node **stack)
{

}
