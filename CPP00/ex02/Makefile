# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisraely <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 21:05:50 by aisraely          #+#    #+#              #
#    Updated: 2021/10/30 21:06:17 by aisraely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= jobofmydreams

SRCS	= Account.class.cpp tests.cpp
OBJS	= ${SRCS:.cpp=.o}
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
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
