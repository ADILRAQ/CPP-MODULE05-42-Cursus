# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 11:45:41 by araqioui          #+#    #+#              #
#    Updated: 2023/09/10 17:44:29 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
HEADER = Bureaucrat.hpp Form.hpp

SRC = main Bureaucrat Form \

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