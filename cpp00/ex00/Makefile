# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 10:30:32 by ttikanoj          #+#    #+#              #
#    Updated: 2023/07/17 15:40:01 by ttikanoj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = ./megaphone.cpp

OBJ = ./megaphone.o

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

all: $(NAME)

%.o: %.cpp
	c++ $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

