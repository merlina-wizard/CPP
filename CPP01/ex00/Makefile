# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/19 15:12:15 by mamerlin          #+#    #+#              #
#    Updated: 2025/06/19 15:48:39 by mamerlin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

SRCS =  main.cpp \
		Zombie.cpp \
		randomChump.cpp \
		newZombie.cpp \

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
