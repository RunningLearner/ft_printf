# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunam <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 17:20:10 by seunam            #+#    #+#              #
#    Updated: 2022/04/17 18:26:24 by seunam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTDIR = ./libft
LIBFT = libft.a

CC = gcc 
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f

SRC =

OBJS =$(SRCS:.c=.o)

.c.o : 
	$(CC) $(CFLAGS) -c $< -I.
$(NAME) : $(OBJS)
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFT) $(NAME)
	$(AR) $@ $?
all : $(NAME)

clean :
	make -C $(LIBFTDIR) clean
	$(RM) $(OBJS)
fclean : clean
	make -C $(LIBFTDIR) fclean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

