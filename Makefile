# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:43:45 by asohrabi          #+#    #+#              #
#    Updated: 2024/02/21 17:09:11 by asohrabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS = checker

FUNC = apply_rotate.c check_args.c cal_push.c cal_rotate_ab.c cal_rotate_ba.c \
			ft_atoi.c ft_sort.c ft_sort_utils.c list_utils.c parse_args.c \
			rules_a.c rules_b.c rules_both.c main.c \

# FUNC_BONUS = 

OBJ = ${FUNC:.c=.o}

# OBJ_BONUS = ${FUNC_BONUS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

%.o: %.c
	cc ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ}
	@make re -C ./libft
	@cc ${OBJ} -Llibft -lft -o ${NAME}

.bonus: ${BONUS} ${OBJ_BONUS}
	@make re -C ./libft
	@cc ${OBJ_BONUS} -Llibft -lft -o ${NAME}
	@touch .bonus

bonus: .bonus

clean:
	@make clean -C ./libft
	@rm -f .bonus
	rm -f ${OBJ} ${OBJ_BONUS}

fclean: clean
	@make fclean -C ./libft
	rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re, bonus