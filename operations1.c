/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:01:37 by loosorio          #+#    #+#             */
/*   Updated: 2024/03/20 16:06:19 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	push(t_node **src, t_node **dest)
{
	t_node	*temp;

	if (!(*src))
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
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
	return ;
	root = *stack;
	while ((*stack)->next->next)
		*(stack) = (*stack)->next;
	temp = *stack;
	(*stack)->next->next = root;
	*stack = temp->next;
	temp->next = NULL;

}
void	sa(t_node **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 4);
}
