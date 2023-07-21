# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 10:30:32 by ttikanoj          #+#    #+#              #
#    Updated: 2023/07/20 15:47:19 by tuukka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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
