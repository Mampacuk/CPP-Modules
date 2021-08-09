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