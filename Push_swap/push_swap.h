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

typedef struct s_node
{
    int value:
    struct s_node   *next;
}   t_node;

char    *ft_putstr(char *str, char c);
char	**ft_split(char const *s, char c);
int num_size(char *str, c);
int	count_nums(char const *s, char c);

#endif
