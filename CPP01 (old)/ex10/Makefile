# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisraely <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 18:26:50 by aisraely          #+#    #+#              #
#    Updated: 2021/10/31 16:39:14 by aisraely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= cato9tails

SRCS	= ${wildcard *.cpp}
OBJS	= ${SRCS:.cpp=.o}
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: ${NAME}

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

${NAME}: ${OBJS}
	@${CC} ${OBJS} ${CFLAGS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re all