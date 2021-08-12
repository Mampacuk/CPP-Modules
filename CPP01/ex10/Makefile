# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 18:26:50 by aisraely          #+#    #+#              #
#    Updated: 2021/08/11 18:26:51 by aisraely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= cato9tails

SRCS	= ${wildcard *.cpp}
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