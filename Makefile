# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche </var/mail/cwastche>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/28 13:37:15 by cwastche          #+#    #+#              #
#    Updated: 2021/07/28 14:31:31 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
CC = gcc
BSRCS = $(wildcard *lst*.c)
SRCS = $(filter-out $(BSCRS), $(wildcard *.c))
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)
NAME = libft.a
HEAD = libft.h
AR = ar rc

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^

bonus : $(BOBJS) $(OBJS)
	$(AR) $(NAME) $^

%.o : %.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS) $(BOBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
