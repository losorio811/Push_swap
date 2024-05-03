/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:21:17 by loosorio          #+#    #+#             */
/*   Updated: 2024/05/03 16:22:52 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*return_cheapest(t_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	rotate_both(t_node **stack_a, t_node **stack_b, t_node *cheapest)
{
	while (*stack_a != cheapest->target_node && *stack_b != cheapest)
		rr(stack_a, stack_b);
	set_current_pos(*stack_a);
	set_current_pos(*stack_b);
}

void	rrotate_both(t_node **stack_a, t_node **stack_b, t_node *cheapest)
{
	while (*stack_a != cheapest->target_node && *stack_b != cheapest)
		rrr(stack_a, stack_b);
	set_current_pos(*stack_a);
	set_current_pos(*stack_b);
}

void	finish_rotation(t_node **stack, t_node *head, char wich_stack)
{
	while (*stack != head)
	{
		if (wich_stack == 'a')
		{
			if (head->above_median)
				ra(stack);
			else
				rra(stack, 1);
		}
		else if (wich_stack == 'b')
		{
			if (head->above_median)
				rb(stack);
			else
				rrb(stack, 1);
		}
	}
}

void	move_nodes(t_node **stack_a, t_node **stack_b)
{
	t_node	*cheapest;

	cheapest = return_cheapest(*stack_b);
	if (cheapest->above_median && cheapest->target_node->above_median)
		rotate_both(stack_a, stack_b, cheapest);
	else if (!(cheapest->above_median) && 
		!(cheapest->target_node->above_median))
		rrotate_both(stack_a, stack_b, cheapest);
	finish_rotation(stack_b, cheapest, 'b');
	finish_rotation(stack_a, cheapest->target_node, 'a');
	pa(stack_b, stack_a);
}
