/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:08:26 by loosorio          #+#    #+#             */
/*   Updated: 2024/03/12 19:00:28 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void    free_list(t_node **root)
{
    t_node *curr;
    t_node *temp;

    curr = *root;
    while(curr->next)
    {
        temp = curr;
        curr = curr->next;
        free(temp);
    }
    free(curr);
}
int check_dup(t_node **stack_a)
{
    t_node *curr;
    t_node *temp;

    curr = *stack_a;
    while (curr->next)
    {
        temp = curr->next;
        while (temp)
        {
            if (curr->value == temp->value)
            {
                free_list(stack_a);
                return(0);
            }
            temp = temp->next;
        }
        curr = curr->next;
    }
    return (1);
}

void    stack_init(t_node **stack_a, long res)
{
    t_node *temp;
    t_node *new_node = (t_node *)malloc(sizeof(t_node));
    new_node->next = NULL;
    new_node->value = res;
    temp = *stack_a;
    if (!*stack_a)
    {
        (*stack_a) = new_node;
        return ;
    }
    while (temp->next)
        temp = temp->next;
    temp->next = new_node;
    temp = *stack_a;
}

long    ft_atol(char **str)
{
    long    sign;
    long    res;
    
    while (**str == ' ')
        (*str)++;
    sign = (**str != '-') - (**str == '-');
    if (**str == '-' || **str == '+')
        (*str)++;
    res = 0;
    while (**str >= '0' && **str <= '9')
    {
        res = res * 10 + **str - '0';
        if ((res * sign) < INT_MIN || (res * sign) > INT_MAX)
        {
            write(2, "Error\n", 7);
            exit(0);
        }
        (*str)++;
    }
    
    return (res * sign);
}

int check_argv(char **argv, t_node **stack_a)
{
    int i;
    long    res;

    i = 0;
    
    while (argv[i])
    {
        res = ft_atol(&argv[i]);
        if(*argv[i] != ' ' && *argv[i])
            return (0);
        if (*argv[i] == '\0') 
            i++;
        stack_init(stack_a, res);
    }
    if(!(check_dup(stack_a)))
        return (0);
    return (1);
}

int main(int argc, char *argv[])
{
    t_node  *stack_a;
    //t_node  *stack_b;

    stack_a = NULL;
    //stack_b = NULL;
    if (argc < 2)
        return (-1);
    if (!(check_argv(&argv[1], &stack_a)))
        write(2, "Error\n", 7);
    return (0);
}
