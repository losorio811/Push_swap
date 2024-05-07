# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 15:04:27 by loosorio          #+#    #+#              #
#    Updated: 2024/05/01 20:59:57 by loosorio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS_NAME = checker
CC = cc
CFLAGS = -Werror -Wextra -Wall -Iinclude -g
SRC_DIR = srcs
OBJ_DIR = objs
BONUS_DIR = bonus
OBJBONUS_DIR = bonusobjs
SRC = operations1.c operations2.c operations3.c tiny_sort.c\
	  main.c parcing.c push_swap_utils1.c push_swap_utils2.c\

BONUS_SRC = bonus/checker.c bonus/checker_help.c bonus/get_next_line.c bonus/get_next_line_utils.c \
			src/operations1.c src/operations2.c src/operations3.c src/tiny_sort.c\
	  		src/main.c src/parcing.c src/push_swap_utils1.c src/push_swap_utils2.c\

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
OBJBONUS = $(addprefix $(OBJBONUS_DIR)/, $(BONUS_SRC:.c=.o))
BONUS = checker

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJBONUS_DIR)/%.o: $(BONUS_DIR)/%.c
	mkdir -p $(OBJBONUS_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR) $(OBJBONUS_DIR)

fclean: clean
	rm -rf $(NAME) $(BONUS)

re: fclean all

bonus: $(BONUS)

$(BONUS): $(OBJBONUS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJBONUS_DIR)/%.o: $(BONUS_DIR)/%.c
	mkdir -p $(OBJBONUS_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: all re clean fclean bonus