NAME = job
SRC = Account.cpp tests.cpp 
RM = rm -f
CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
