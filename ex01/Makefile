NAME = ex01

CC = c++

CGLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp


OBJS = $(SRCS:.cpp=.o)

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(CGLAGS) $(OBJS) -o $(NAME)


%.o: %.cpp
	$(CC) $(CGLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)


re: fclean all

.PHONY: all clean fclean re