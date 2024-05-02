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
CPP_FLAGS	=	-Wall -Werror -Wextra -std=c++98
CPP			=	c++

all:	${NAME}

${NAME}:
	${CPP} ${CPP_FLAGS} ${SRCS} -o ${NAME}

clean:
	rm -rf ${NAME}

fclean:	clean

re:	fclean all

.PHONY:	all clean fclean re
