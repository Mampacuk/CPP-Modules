# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisraely <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 15:50:50 by aisraely          #+#    #+#              #
#    Updated: 2021/08/05 15:50:51 by aisraely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= myphonebook

SRCS	= Contact.class.cpp main.cpp
OBJS	= ${SRCS:.cpp=.o}
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${OBJS} ${CFLAGS}  -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re all
