#include "push_swap.h"

void	set_current_pos(t_node *stack)
{
	int	i;
	int	middle;

	if (stack == NULL)
		return ;
	i = 0;
	middle = stack_len(stack) / 2;
	while (stack)
	{
		stack->current_pos = i;
		if (i <= middle)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		++i;
	}
}

void	set_target_node(t_node *stack_a, t_node *stack_b)
{
	long	best_match;
	t_node	*current_a;
	t_node	*target;

	while (stack_b)
	{
		best_match = LONG_MAX;
		current_a = stack_a;
		while (current_a)
		{
			if (current_a->value > stack_b->value && current_a->value < best_match)
			{
				best_match = current_a->value;
				target = current_a;
			}
			current_a = current_a->next;
		}
		if (LONG_MAX == best_match)
			stack_b->target_node = find_smallest_node(stack_a);
		else
			stack_b->target_node = target;
		stack_b = stack_b->next;
	}
}

void	set_price(t_node *stack_a, t_node *stack_b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(stack_a);
	len_b = stack_len(stack_b);
	while (stack_b)
	{
		stack_b->push_price = stack_b->current_pos;
		if (!(stack_b->above_median))
			stack_b->push_price = len_b - (stack_b->current_pos);
		if (stack_b->target_node->above_median)
			stack_b->push_price += stack_b->target_node->current_pos;
		else
			stack_b->push_price += len_a - (stack_b->target_node->current_pos);
		stack_b = stack_b->next;
	}
}

void	set_cheapest(t_node *stack)
{
	long	cheapest_value;
	t_node	*cheapest_node;

	if (stack == NULL)
		return ;
	cheapest_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_price < cheapest_value)
		{
			cheapest_value = stack->push_price;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}

void	init_node(t_node *stack_a, t_node *stack_b)
{
	set_current_pos(stack_a);
	set_current_pos(stack_b);
	set_target_node(stack_a, stack_b);
	set_price(stack_a, stack_b);
	set_cheapest(stack_b);
}