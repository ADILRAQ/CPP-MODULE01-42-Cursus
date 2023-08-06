# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 11:22:20 by araqioui          #+#    #+#              #
#    Updated: 2023/08/05 11:26:24 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PointRef

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): main.o
	$(CC) $(FLAGS) main.o -o $@

main.o: main.cpp
	$(CC) $(FLAGS) -c $<

clean:
	$(RM) main.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re