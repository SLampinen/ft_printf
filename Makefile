# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 13:55:53 by slampine          #+#    #+#              #
#    Updated: 2022/12/05 13:55:55 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = ft_printf.c ft_check_specifier.c
OBJECTS = $(SOURCES:%.c=%.o)

CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(OBJECTS) ft_printf.h
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	cc $(CFLAGS) -I ft_printf.h $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME)
	rm -f libft.
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re