# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 16:27:32 by asafrono          #+#    #+#              #
#    Updated: 2025/04/11 16:27:32 by asafrono         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for My Awesome PhoneBook

NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror
#-std=c++98

SRC = Main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
