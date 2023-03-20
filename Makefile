# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmassavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 22:38:57 by cmassavi          #+#    #+#              #
#    Updated: 2022/01/18 23:04:39 by cmassavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =  ft_printf.c \
		sources/ft_putchar.c \
		sources/ft_putnbr.c \
		sources/ft_putstr.c \
		sources/hex.c \
		sources/hex1.c \
		sources/pointeur.c \
		sources/uns.c \
		sources/unsitoa.c \
		sources/ft_itoa.c \
		sources/divRes.c

SURPL_O = 	ft_putchar.o \
			ft_putnbr.o \
			ft_putstr.o \
			hex.o \
			hex1.o \
			pointeur.o \
			uns.o \
			unsitoa.o \
			ft_itoa.o \
			divRes.o

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O) 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
