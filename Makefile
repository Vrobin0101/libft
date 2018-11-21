# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vrobin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/13 07:22:21 by vrobin            #+#    #+#              #
#    Updated: 2018/11/13 09:14:43 by vrobin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS = ./libft.h
SOURCES = ./ft_*.c
OBJECTS = ./ft_*.o
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): OBJ
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

OBJ:
	$(CC) $(FLAGS) -c $(SOURCES) -I $(HEADERS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
