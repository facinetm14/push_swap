# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 01:39:05 by fakouyat          #+#    #+#              #
#    Updated: 2022/07/22 01:39:05 by fakouyat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = ft_push_swap.c\
 	ft_swap_top.c\
	ft_initialise.c\
	ft_push_top.c\
	ft_swap_both_top.c\
	ft_rotate.c\
	ft_rotate_both.c\
	ft_rotate_reverse.c\
	ft_rotate_reverse_both.c\
	ft_sort_min.c\
	ft_helpers_stacks.c\
	ft_utils.c\
	ft_stack_to_array.c\
	ft_sort.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
