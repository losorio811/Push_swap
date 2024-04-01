/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:02:46 by loosorio          #+#    #+#             */
/*   Updated: 2024/03/20 16:05:20 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 4);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 4);
}

void	pa(t_node **stack_b, t_node **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 4);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 4);
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 4);
}