# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/09/24 21:11:57 by dcerrito         ###   ########.fr        #
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

OBJS = $(addprefix $(SRC), $(patsubst %.s, %.o, $(LIB)))

$(NAME): install $(OBJS)
	$(PACK) $(NAME) $(OBJS)
all: $(NAME)
install:
	@tar -xf ./nasm-2.15.05-macosx.zip
clean:
	$(FRM) $(OBJS)
fclean: clean
	$(FRM) $(NAME)
re: fclean all
.PHONY: all install clean fclean re