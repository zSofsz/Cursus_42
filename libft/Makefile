# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 17:09:51 by sofs              #+#    #+#              #
#    Updated: 2023/05/07 21:13:41 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
DEPS = .
OBJS = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
OBJS_BONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

%.o : %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(DEPS)

$(NAME) : $(OBJS)
	ar -rc $@ $^

all : $(NAME)

bonus : $(OBJS) $(OBJS_BONUS)
	ar -rc $(NAME) $^

clean :
	rm -f $(OBJS)
	rm -f $(OBJS_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

