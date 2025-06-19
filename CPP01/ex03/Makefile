# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/19 17:04:58 by mamerlin          #+#    #+#              #
#    Updated: 2025/06/19 17:05:08 by mamerlin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence

SRCS =  main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o ${NAME} $(SRCS)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
