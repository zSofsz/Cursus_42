# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 21:13:13 by marvin            #+#    #+#              #
#    Updated: 2023/05/07 21:13:13 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
DEPS = .
OBJS = checks.o conversions_1.o ft_printf.o

%.o : %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(DEPS)

$(NAME) : $(OBJS)
	ar -rc $@ $^

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all