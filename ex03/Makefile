# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 14:18:54 by lgirault          #+#    #+#              #
#    Updated: 2023/08/01 10:44:05 by lgirault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia
CC = c++
FLAGS = -Wall -Wextra -Werror -g
C98 = -std=c++98
RM = rm -rf

SRC =	main.cpp \
	AMateria.cpp \
	Character.cpp \
	MateriaCure.cpp \
	MateriaIce.cpp \
	MateriaSource.cpp \

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) $(C98) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(C98) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all