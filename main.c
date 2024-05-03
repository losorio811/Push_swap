/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:08:26 by loosorio          #+#    #+#             */
/*   Updated: 2024/05/03 16:15:19 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node **root)
{
	t_node		*curr;
	t_node		*temp;

	curr = *root;
	while (curr->next)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	free(curr);
}

void	push_swap(t_node **stack_a, t_node **stack_b)
{
	t_node	*smallest;
	int		len_a;

	len_a = stack_len(*stack_a);
	while (len_a-- > 3 && !stack_sorted(*stack_a))
		pb(stack_a, stack_b);
	sort_three(stack_a);
	while (*stack_b)
	{
		init_node(*stack_a, *stack_b);
		move_nodes(stack_a, stack_b);
	}
	set_current_pos(*stack_a);
	smallest = find_smallest_node(*stack_a);
	if (smallest->above_median)
		while (*stack_a != smallest)
			ra(stack_a);
	else
		while (*stack_a != smallest)
			rra(stack_a, 1);
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (-1);
	if (!(check_argv(&argv[1], &stack_a)))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (!stack_sorted(stack_a))
	{
		if (stack_len(stack_a) == 2)
			sa(&stack_a);
		else if (stack_len(stack_a) == 3)
			sort_three(&stack_a);
		else
			push_swap(&stack_a, &stack_b);
	}
	free_list(&stack_a);
	return (0);
}
