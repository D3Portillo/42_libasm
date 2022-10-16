# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/10/16 04:07:06 by dcerrito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
PACK = ar rcs
FRM = rm -rf

AS = ./nasm-2.15.05/nasm
ASFLAGS = -fmacho64

CC = gcc
# -g to add debug info
CFLAGS = -Wall -Werror -Wextra -I. -fno-pie -g

SRC = ./src/
LIB = \
	ft_strlen.s	\
	ft_strcmp.s	\
	ft_strcpy.s	\
	ft_strdup.s	\
	ft_read.s	\
	ft_write.s	\

BONUS = \
	ft_atoi_base.s	\
	ft_list_push_front.s	\
	ft_list_remove_if.s	\
	ft_list_size.s	\
	ft_list_sort.s	\

OBJS = $(addprefix $(SRC), $(patsubst %.s, %.o, $(LIB)))
BONUS_OBJS = $(addprefix $(SRC), $(patsubst %.s, %.o, $(BONUS)))

$(NAME): $(NASM) $(OBJS)
	$(PACK) $(NAME) $(OBJS)
all: $(NAME)
$(NASM):
	@tar -xf ./nasm-2.15.05-macosx.zip
bonus: $(NASM) $(BONUS_OBJS)
	$(PACK) $(NAME) $(BONUS_OBJS)
clean:
	$(FRM) $(OBJS)
fclean: clean
	$(FRM) $(NAME)
tests: all bonus
	@$(CC) $(CFLAGS) main.c tests/*.c libasm.a
it: tests
	@./a.out
it\:%: tests
	@echo "Testing for #$*"
	@./a.out "$*"
re: fclean all
.PHONY: all clean fclean tests it re