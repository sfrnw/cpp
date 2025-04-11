NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror
# -std=c++98

all: $(NAME)

$(NAME): $(NAME).cpp
	$(CC) $(CFLAGS) -o $(NAME) $(NAME).cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
