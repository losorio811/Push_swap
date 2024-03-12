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
	t_node	*temp;

	if (!(*stack_1))
		return ;
	temp = *stack_1;
	*stack_1 = (*stack_1)->next;
	temp->next = *stack_2;
	*stack_2 = temp;
}

void	rotate(t_node **stack)
{
	t_node	*root;
	t_node	*temp;

	temp = *stack;
	*stack = (*stack)->next;
	root = *stack;
	while (root->next)
		root = root->next;
	root->next = temp;
	temp->next = NULL;
}

void	rrotate(t_node **stack)
{
	t_node	*temp;
	t_node	*root;

	if (!(*stack) || (!(*stack)->next))
	root = *stack;
	while ((*stack)->next->next)
		*(stack) = (*stack)->next;
	temp = *stack;
	(*stack)->next->next = root;
	*stack = temp->next;
	temp->next = NULL;

}
