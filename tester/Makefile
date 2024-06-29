# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 14:59:38 by ddias-fe          #+#    #+#              #
#    Updated: 2024/04/09 14:59:38 by ddias-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBFT = ../libft/libft.a
NAME = libft_tester

SRCS = main.c tester_utils.c test_functions/ft_atoi_test.c test_functions/ft_bzero_test.c
OBJS =  $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIB_OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) $(LIBFT)

clean:
	$(RM) $(LIB_OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

PHONY: all clean fclean re