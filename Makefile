# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunam <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 17:20:10 by seunam            #+#    #+#              #
#    Updated: 2022/04/20 16:16:58 by seunam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTDIR = ./libft
LIBFT = libft.a

CC = gcc 
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f

SRCS = ft_printf.c ft_parsing.c ft_util.c

OBJS =$(SRCS:.c=.o)

all : $(NAME)
$(NAME) : $(OBJS)
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFT) $(NAME) 
	$(AR) $(NAME) $(OBJS)

clean :
	make -C $(LIBFTDIR) clean
	$(RM) $(OBJS)
fclean : clean
	make -C $(LIBFTDIR) fclean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

