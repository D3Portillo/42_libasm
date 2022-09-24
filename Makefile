# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/09/24 22:00:36 by dcerrito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
PACK = ar rcs
FRM = rm -rf

AS = ./nasm-2.15.05/nasm
ASFLAGS = -fmacho64

SRC = ./src/
LIB = \
	ft_strlen.s	\

LIB_OBJS = $(addprefix $(SRC), $(patsubst %.s, %.o, $(LIB)))

$(NAME): $(LIB_OBJS)
	@tar -xf ./nasm-2.15.05-macosx.zip
	$(PACK) $(NAME) $(LIB_OBJS)
all: $(NAME)
clean:
	$(FRM) $(LIB_OBJS)
fclean: clean
	$(FRM) $(NAME)
re: fclean all
.PHONY: re clean fclean bonus all