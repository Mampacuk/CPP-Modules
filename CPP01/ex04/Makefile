# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisraely <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 18:26:28 by aisraely          #+#    #+#              #
#    Updated: 2021/10/31 16:39:31 by aisraely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace

SRCS		= $(wildcard *.cpp)
OBJS		= $(SRCS:.cpp=.o)
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@${CXX} $(OBJS) ${CXXFLAGS}  -o $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(RM) ${wildcard *.replace}

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all