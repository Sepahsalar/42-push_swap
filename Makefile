# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:43:45 by asohrabi          #+#    #+#              #
#    Updated: 2024/04/15 16:37:02 by asohrabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

HEADER	= -I ./includes

FUNC =  srcs/check_args.c srcs/ft_sort.c srcs/ft_atoi_m.c srcs/cal_rotate.c \
			srcs/ft_sort_utils.c srcs/apply_rr_rrr.c  srcs/apply_rarrb_rrarb.c \
			srcs/list_utils.c srcs/parse_args.c srcs/rules_a.c srcs/rules_b.c \
			srcs/rules_both.c srcs/cal_push.c srcs/main.c \

OBJ = ${FUNC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc ${CFLAGS} ${HEADER} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ}
	@make -C ./libft
	@cc ${CFLAGS} ${OBJ} -Llibft -lft ${HEADER} -o ${NAME}

clean:
	rm -f ${OBJ} ${OBJ_BONUS}
	@make clean -C ./libft

fclean: clean
	rm -f ${NAME}
	@make fclean -C ./libft

re: fclean all

.PHONY: all, clean, fclean, re