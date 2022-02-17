
NAME = a.out

CC = clang++

CPPFLAGS = -Wall -Werror -Wextra

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	clang++ $(CPPFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re


