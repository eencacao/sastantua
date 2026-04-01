# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/02 00:34:34 by lutsiara          #+#    #+#              #
#    Updated: 2026/04/02 00:34:35 by lutsiara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sastantua

CC = cc

CFLAGS = -Wall -Wextra -Werror

IDIR = includes

SDIR = srcs

SRCS = $(wildcard $(SDIR)/*.c)

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -I$(IDIR) $(CFLAGS) $^ -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(IDIR) -c $< -o $@

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean

.NOTPARALLEL: re
