# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vibondar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 15:23:09 by vibondar          #+#    #+#              #
#    Updated: 2017/11/18 15:23:10 by vibondar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIBFTDIR = libft/

SRC =	v_patall.c \
		ft_read_f.c \
		num_fig.c \
		ft_square.c \
		ft_fill_square.c \
		main.c \
		ft_valid.c \
		ft_fillstr.c \
		valid_ch.c \
		valid_p1.c \
		valid_p2.c

OBJ = $(SRC:.c=.o)

HEADER = fillit.h
HEADERLIBFT = libft/libft.h
CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJ) $(LIBFTDIR)libft.a
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L./$(LIBFTDIR) -lft

%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

$(LIBFTDIR)libft.a: libft/Makefile
	make -C $(LIBFTDIR)

clean:
		rm -f $(OBJ)
		make clean -C $(LIBFTDIR)

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBFTDIR)libft.a

re: fclean all
