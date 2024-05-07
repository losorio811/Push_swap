#include "checker.h"

void	ft_help(t_node **stack_a, t_node **stack_b)
{
	char	*command;
	int		len;

	len = stack_len(stack_a);
	command = get_next_line(0);
	while (command)
	{
		check_cmnds(command, stack_a, stack_b);
		free(command);
		command = get_next_line(0);
	}
	free(command);
	if (stack_sorted(stack_a) && stack_len(stack_a) == len)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (-1);
	if (!(check_argv(&argv[1], &stack_a)))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (!stack_sorted(stack_a))
	{
		if (stack_len(stack_a) == 2)
			sa(&stack_a, 1);
		else if (stack_len(stack_a) == 3)
			sort_three(&stack_a);
		else
			push_swap(&stack_a, &stack_b);
	}
	ft_help(&stack_a, &stack_b);
	free_list(&stack_a);
	return (0);
}
