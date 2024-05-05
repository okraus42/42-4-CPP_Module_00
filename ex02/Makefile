# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 10:52:31 by okraus            #+#    #+#              #
#    Updated: 2024/05/05 11:52:17 by okraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	thejobofyourdreams
SRCS		=	tests.cpp Account.cpp
OBJS		=	$(SRCS:.cpp=.o)
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
CPP			=	c++

all:		${NAME}

${NAME}:	${OBJS}
			${CPP} ${CPPFLAGS} ${SRCS} -o ${NAME}

%.o:		%.cpp
			$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re
