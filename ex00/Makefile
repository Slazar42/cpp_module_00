NAME = megaphone
SRC = megaphone.cpp
RM = rm -rf
CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
