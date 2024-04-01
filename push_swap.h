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
#include <stdbool.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

typedef struct s_node
{
    int						value;
    int						current_pos;
    int						push_price;
    bool				above_median;
    bool				cheapest;
    struct	s_node	*target_node;
    struct	s_node	*next;
}					t_node;

long	ft_atol(char **str);
int	check_argv(char **argv, t_node **stack_a);
int	main(int argc, char *argv[]);
int	check_dup(t_node **stack_a);
void	free_list(t_node **root);
void	swap(t_node **stack);
void	push(t_node **src, t_node **dest);
void	rotate(t_node **stack);
void	rrotate(t_node **stack);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_b, t_node **stack_a);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a,t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a,t_node **stack_b);
void	sort_three(t_node **stack_a);
t_node	*find_highest_node(t_node *stack);
t_node	*find_smallest_node(t_node *stack);
int	stack_len(t_node *stack);
void	set_current_pos(t_node *stack);
void	set_target_node(t_node *stack_a, t_node *stack_b);
void	set_price(t_node *stack_a, t_node *stack_b);
void	set_cheapest(t_node *stack);
void	init_node(t_node *stack_a, t_node *stack_b);
t_node	*return_cheapest(t_node *stack);
void	rotate_both(t_node **stack_a, t_node **stack_b, t_node *cheapest);
void	rrotate_both(t_node **stack_a, t_node **stack_b, t_node *cheapest);
void	finish_rotation(t_node **stack, t_node *head, char wich_stack);
void	move_nodes(t_node **stack_a, t_node **stack_b);
void	sort_five(t_node **stack_a, t_node **stack_b);
bool	stack_sorted(t_node *stack);
void    push_swap(t_node **stack_a, t_node **stack_b);
#endif
