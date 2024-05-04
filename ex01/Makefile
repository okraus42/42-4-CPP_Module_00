# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 10:52:31 by okraus            #+#    #+#              #
#    Updated: 2024/05/04 18:18:15 by okraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	myawesomephonebook
SRCS		=	myawesomephonebook.cpp PhoneBook.class.cpp Contact.class.cpp
OBJS		=	$(SRCS:.cpp=.o)
CPP_FLAGS	=	-Wall -Werror -Wextra -std=c++98
CPP			=	c++

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp
			$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
