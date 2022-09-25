# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/09/25 07:46:38 by dcerrito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
PACK = ar rcs
FRM = rm -rf

AS = ./nasm-2.15.05/nasm
ASFLAGS = -fmacho64

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I. -fno-pie

SRC = ./src/
LIB = \
	ft_strlen.s	\

OBJS = $(addprefix $(SRC), $(patsubst %.s, %.o, $(LIB)))

$(NAME): $(NASM) $(OBJS)
	$(PACK) $(NAME) $(OBJS)
all: $(NAME)
$(NASM):
	@tar -xf ./nasm-2.15.05-macosx.zip
clean:
	$(FRM) $(OBJS)
fclean: clean
	$(FRM) $(NAME)
it: all
	@$(CC) $(CFLAGS) main.c libasm.a
	./a.out
re: fclean all
.PHONY: all clean fclean it re