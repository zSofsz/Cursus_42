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

CC = cc
CFLAGS = -Wall -Wextra -Werror
DEPS = .
OBJS = conversions_1.o conversions_2.o ft_printf.o printf_utils.o

%.o : %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(DEPS)

all : $(NAME)

$(NAME) : $(OBJS)
	make bonus -C libft
	cp libft/libft.a $(NAME)
	ar -rc $@ $^

clean :
	make clean -C libft
	rm -f $(OBJS)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re : fclean all