# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:43:45 by asohrabi          #+#    #+#              #
#    Updated: 2024/03/25 11:32:00 by asohrabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS = checker

HEADER	= -I ./includes

FUNC =  srcs/check_args.c srcs/ft_sort.c srcs/ft_atoi.c srcs/cal_rotate_ab.c \
			srcs/cal_rotate_ba.c srcs/ft_sort_utils.c srcs/apply_rotate.c \
			srcs/list_utils.c srcs/parse_args.c srcs/rules_a.c srcs/rules_b.c \
			srcs/rules_both.c srcs/cal_push.c srcs/main.c \

# FUNC_BONUS = 

OBJ = ${FUNC:.c=.o}

# OBJ_BONUS = ${FUNC_BONUS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc ${CFLAGS} ${HEADER} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ}
	@make -C ./libft
	@cc ${OBJ} -Llibft -lft -o ${NAME}

.bonus: ${BONUS} ${OBJ_BONUS}
	@make -C ./libft
	@cc ${OBJ_BONUS} -Llibft -lft ${HEADER} -o ${NAME}
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

debug:
	make fclean
	make all FLAGS="-g -fsanitize=address -O1 -fno-omit-frame-pointer"

.PHONY: all, clean, fclean, re, bonus