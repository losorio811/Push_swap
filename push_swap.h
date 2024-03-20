/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:05:30 by loosorio          #+#    #+#             */
/*   Updated: 2024/03/20 16:01:03 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_node
{
    int value;
    struct s_node   *next;
}   t_node;

long    ft_atol(char **str);
int check_argv(char **argv, t_node **stack_a);
int main(int argc, char *argv[]);
int check_dup(t_node **stack_a);
void    free_list(t_node **root);
void	swap(t_node **stack);
void	push(t_node **stack_1, t_node **stack_2);
void	rotate(t_node **stack);
void	rrotate(t_node **stack);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a,t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a,t_node **stack_b);

#endif
