# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:43:45 by asohrabi          #+#    #+#              #
#    Updated: 2023/11/29 12:12:32 by asohrabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FUNC = check_args.c \
			ft_atoi.c \
			ft_sort.c \
			ft_split.c \
			list_utils.c \
			parse_args.c \
			rules_a.c \
			rules_b.c \
			rules_both.c \
			main.c

# FUNC_BONUS = 

OBJ = ${FUNC:.c=.o}

OBJ_BONUS = ${FUNC_BONUS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ}	
	ar -crs ${NAME} ${OBJ}

.bonus: ${NAME} ${OBJ_BONUS}
	ar -crs ${NAME} ${OBJ_BONUS}
	touch .bonus

bonus: .bonus

clean:
	rm -f ${OBJ} ${OBJ_BONUS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re, bonus