/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:05:47 by loosorio          #+#    #+#             */
/*   Updated: 2024/03/20 16:05:57 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 4);
}

void	rr(t_node **stack_a,t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 4);
}

void	rra(t_node **stack_a)
{
	rrotate(stack_a);
	write(1, "rra\n", 5);
}

void	rrb(t_node **stack_b)
{
	rrotate(stack_b);
	write(1, "rrb\n", 5);
}

void	rrr(t_node **stack_a,t_node **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 5);
}