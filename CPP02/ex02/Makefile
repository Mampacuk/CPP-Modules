# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisraely <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 16:39:54 by aisraely          #+#    #+#              #
#    Updated: 2021/10/31 17:05:38 by aisraely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fixed

SRCS	= Fixed.cpp main.cpp
B_SRCS	= Fixed.cpp tester.cpp
OBJS		= $(SRCS:.cpp=.o)
B_OBJS	= ${B_SRCS:.cpp=.o}
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

all: $(NAME)

.cpp.o:
	@$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(RM) ${B_OBJS}

fclean: clean
	@$(RM) $(NAME)

re: fclean all

test: ${B_OBJS}
	@$(CXX) ${B_OBJS} $(CXXFLAGS) -o $(NAME)

.PHONY: clean fclean re all