#include "checker.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);	
}

void	ft_error(t_node **stack_a, t_node **stack_b)
{
	free_list(stack_a);
	free_list(stack_b);
	write(2, "Error\n", 6);
	exit(0);
}

void	check_cmnds(char *command, t_node **stack_a, t_node **stack_b)
{
	if (!ft_strcmp(command, "sa\n"))
		sa(stack_a, 0);
	else if (!ft_strcmp(command, "sb\n"))
		sb(stack_a, 0);
	else if (!ft_strcmp(command, "ss\n"))
		ss(stack_a, stack_a, 0);
	else if (!ft_strcmp(command, "pa\n"))
		pa(stack_a, stack_b, 0);
	else if (!ft_strcmp(command, "pb\n"))
		pb(stack_a, stack_b, 0);
	else if (!ft_strcmp(command, "ra\n"))
		ra(stack_a, 0);
	else if (!ft_strcmp(command, "rb\n"))
		rb(stack_b, 0);
	else if (!ft_strcmp(command, "rr\n"))
		rr(stack_a, stack_b, 0);
	else if (!ft_strcmp(command, "rra\n"))
		rra(stack_a, 0);
	else if (!ft_strcmp(command, "rrb\n"))
		rrb(stack_b, 0);
	else if (!ft_strcmp(command, "rrr\n"))
		rrr(stack_a, stack_b, 0);
	else
		error(stack_a, stack_b);
}