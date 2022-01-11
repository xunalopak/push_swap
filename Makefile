# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 15:53:38 by rchampli          #+#    #+#              #
#    Updated: 2022/01/11 01:04:27 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_END	=	\033[0;0m
_GREEN	=	\033[0;32m

NAME = push_swap

SRCS = main.c \
		operators.c\
		parse_args.c\
		push_swap_sub.c\
		push_swap_sub2.c\
		push_swap_utils.c\
		push_swap.c\
		stack.c\
		utils.c\
		utils2.c\
		

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

OBJS	= $(SRCS:.c=.o)

OBJS	= $(SRCS:.c=.o)

.c.o:
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS) push_swap.h
			@echo "$(_GREEN)[ Try to make this fucking $(NAME) ]$(_END)"
			@$(CC) -o $(NAME) $(OBJS)
			@echo "$(_GREEN)[ Done ]$(_END)"

bonus:		all

clean:
			@$(RM) $(OBJS)
			@echo "$(_GREEN)[ .O have been destroy ]$(_END)"

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(_GREEN)[ $(NAME) has been destroy ]$(_END)"

re:			fclean all


.PHONY : all clean fclean re bonus