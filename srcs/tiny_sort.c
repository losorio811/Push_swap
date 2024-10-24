/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:22:17 by loosorio          #+#    #+#             */
/*   Updated: 2024/05/03 16:28:28 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_node *stack)
{
	int	i;

	if (stack == NULL)
		return (0);
	i = 0;
	while (stack)
	{
		++i;
		stack = stack->next;
	}
	return (i);
}

t_node	*find_smallest_node(t_node *stack)
{
	long	smallest;
	t_node	*smallest_node;

	if (stack == NULL)
		return (NULL);
	smallest = LONG_MAX;
	while (stack)
	{
		if (stack->value < smallest)
		{
			smallest = stack->value;
			smallest_node = stack;
		}
		stack = stack->next;
	}
	return (smallest_node);
}

t_node	*find_highest_node(t_node *stack)
{
	int		highest;
	t_node	*highest_node;

	if (stack == NULL)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if (stack->value > highest)
		{
			highest = stack->value;
			highest_node = stack;
		}
		stack = stack->next;
	}
	return (highest_node);
}

void	sort_three(t_node **stack_a)
{
	t_node	*highest_node;

	highest_node = find_highest_node(*stack_a);
	if (*stack_a == highest_node)
		ra(stack_a, 1);
	else if ((*stack_a)->next == highest_node)
		rra(stack_a, 1);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, 1);
}
