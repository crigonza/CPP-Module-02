# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 19:07:10 by crigonza          #+#    #+#              #
#    Updated: 2023/09/20 18:20:57 by crigonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(NAME)

.PHONY: all clean fclean re