NAME = phonebook

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRCS = phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	clang++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
