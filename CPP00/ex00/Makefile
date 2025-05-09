CC = c++
CFLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = megaphone

all:$(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) $< -o $@

fclean :
	rm -rf $(NAME)

re : fclean all

git :
	git add .
	git commit -m "update"
	git push origin main
