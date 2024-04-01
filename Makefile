# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 15:04:27 by loosorio          #+#    #+#              #
#    Updated: 2024/02/23 18:05:10 by loosorio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = operations1.c operations2.c operations3.c tiny_sort.c\
	  main.c parcing.c push_swap_utils1.c push_swap_utils2.c\

OBJ = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
		@echo "\nRemoving objects:"
		rm -f $(OBJ)
fclean: clean
		@echo "\nRemoving push_swap:"
		rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re