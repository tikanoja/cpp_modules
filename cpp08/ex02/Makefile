# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 13:53:37 by ttikanoj          #+#    #+#              #
#    Updated: 2023/09/07 13:19:40 by ttikanoj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutant

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

all: $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
