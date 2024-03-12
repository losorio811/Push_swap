/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:05:30 by loosorio          #+#    #+#             */
/*   Updated: 2024/02/23 18:04:13 by loosorio         ###   ########.fr       */
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

#endif
