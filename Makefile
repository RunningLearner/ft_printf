# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunam <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 17:20:10 by seunam            #+#    #+#              #
#    Updated: 2022/06/29 21:09:56 by seunam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTDIR = ./libft
LIBFT = libft.a

CC = cc 
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

