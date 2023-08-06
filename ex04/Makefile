# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 17:16:52 by araqioui          #+#    #+#              #
#    Updated: 2023/08/06 18:46:50 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ReplaceStr

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
HEADER = header.hpp

SRC = main openFiles treatLines \

OBJ = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
