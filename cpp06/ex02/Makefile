
NAME = convert

CC = c++

CPPFLAGS = -Wall -Werror -Wextra

SRCS =	main.cpp \
	Base.cpp \
	A.cpp \
	B.cpp \
	C.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re


