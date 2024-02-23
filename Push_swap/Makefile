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

NAME = push_swap.a
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = split.c

OBJ = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)
clean:
		@echo "\nRemoving objects:"
		rm -f $(OBJ)
fclean: clean
		@echo "\nRemoving push_swap.a:"
		rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re