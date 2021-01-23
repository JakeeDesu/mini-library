# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 08:59:44 by hmhindat          #+#    #+#              #
#    Updated: 2018/10/12 02:56:11 by hmhindat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c
O_FILES = *.o
INC = libft.h

all : $(NAME)
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)
$(NAME) :
	gcc -c -Wall -Wextra -Werror $(SRCS)
clean :
	rm -rf $(O_FILES)
fclean : clean
	rm -rf $(NAME)
re : fclean all
