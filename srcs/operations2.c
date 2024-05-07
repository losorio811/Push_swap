/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:02:46 by loosorio          #+#    #+#             */
/*   Updated: 2024/05/03 16:16:28 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node **stack_b, int flag)
{
	swap(stack_b);
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b, int flag)
{
	swap(stack_a);
	swap(stack_b);
	if (flag)
		write(1, "ss\n", 3);
}

void	pa(t_node **stack_b, t_node **stack_a, int flag)
{
	push(stack_b, stack_a);
	if (flag)
		write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b, int flag)
{
	push(stack_a, stack_b);
	if (flag)
		write(1, "pb\n", 3);
}

void	ra(t_node **stack_a, int flag)
{
	rotate(stack_a);
	if (flag)
		write(1, "ra\n", 3);
}
