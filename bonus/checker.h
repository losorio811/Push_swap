
#ifndef CHECKER_H
# define CHECKER_H

# include "../include/push_swap.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

char	*get_next_line(int fd);
char	*ft_joinbuf(char *line, char *buf);
int		ft_strlen(char *str);
int		ft_cleanbuf(char *buf);
char	*ft_checknl(char *str);
int		ft_strcmp(char *s1, char *s2);
void	check_cmnds(char *command, t_node **stack_a, t_node **stack_b);
void	ft_help(t_node **stack_a, t_node **stack_b);
void	ft_error(t_node **stack_a, t_node **stack_b);

#endif