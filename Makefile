# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 16:14:09 by rlupin            #+#    #+#              #
#    Updated: 2022/02/16 17:21:39 by rlupin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = ft_printf_char.c ft_printf_int_dec.c ft_printf_n_hex.c \
	ft_printf_per.c ft_printf_str.c ft_printf_u_int_dec.c \
	ft_printf_v_ptr.c ft_printf.c printf_conversions.c

HEAD = ft_printf.h
NAME = libftprintf.a
LIBFT = libft/libft.a
OBJ_SRC = $(SRC_FILES:.c=.o)
FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ_SRC)
			$(MAKE) -C ./libft
			cp $(LIBFT) $(NAME)
			ar rc $(NAME) $(OBJ_SRC)
			ranlib $(NAME)

%.o:	%.c $(HEAD)
			cc $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJ_SRC)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
