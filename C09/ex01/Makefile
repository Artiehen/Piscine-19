# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 11:20:29 by jhenriqu          #+#    #+#              #
#    Updated: 2025/08/26 13:25:48 by jhenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR = ./srcs/

HEADER = ./includes/

SRC = ./srcs/ft_putchar.c \
      ./srcs/ft_swap.c \
      ./srcs/ft_putstr.c \
      ./srcs/ft_strlen.c \
      ./srcs/ft_strcmp.c


MY_OBJ = $(SRC:.c=.o)
	

CC = cc

FLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: $(NAME)

$(NAME) : $(MY_OBJ)
	ar rc $(NAME) $(MY_OBJ)

.c.o:
	$(CC) $(FLAGS) -I $(HEADER) -c $< -o $(<:.c=.o)

clean:
	rm -rf $(MY_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re

