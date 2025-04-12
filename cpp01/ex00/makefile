# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 16:33:57 by asafrono          #+#    #+#              #
#    Updated: 2025/04/12 16:33:57 by asafrono         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables for compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Target executable name
NAME = BraiiiiiiinnnzzzZ

# Source files
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

# Object files (generated from source files)
OBJS = $(SRCS:.cpp=.o)

# Default rule to build the executable
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re