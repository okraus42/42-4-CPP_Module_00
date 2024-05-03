# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 10:52:31 by okraus            #+#    #+#              #
#    Updated: 2023/09/15 11:58:48 by okraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)
CPP_FLAGS	=	-Wall -Werror -Wextra -std=c++98
CPP			=	c++

all:		${NAME}

${NAME}:	${OBJS}
			${CPP} ${CPP_FLAGS} ${SRCS} -o ${NAME}

%.o:		%.cpp
			$(CPP) $(CFLAGS) -c $< -o $@

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re
