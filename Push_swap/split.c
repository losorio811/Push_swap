/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:40:44 by loosorio          #+#    #+#             */
/*   Updated: 2024/02/23 18:02:42 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_nums(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c)
			{
				if (s[i] == 0)
					break ;
				i++;
			}
			count++;
		}
	}
	return (count);
}
int num_size(char *str, c)
{
    int i;

    i = 0;
    while (str[i] && str[i] != c)
        i++;
    return (i);
}

char    *ft_putstr(char *str, char c)
{
    int     i;
    char    *ptr;

    ptr = (char *)malloc(num_size(str, c) + 1);
    i = 0;
    while (str[i] && str[i] != c)
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

char	**ft_split(char const *str, char c)
{
	char	**ptr;
	int		i;
	int		start;
	int		j;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(count_nums(str, c) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
            ptr[j++] = ft_putstr(&str[i], c);
		}
        while (str[i] != c)
            i++;
	}
	return (ptr);
}
