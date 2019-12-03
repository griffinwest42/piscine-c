# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grwest <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 09:29:10 by grwest            #+#    #+#              #
#    Updated: 2019/11/11 09:41:32 by grwest           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/*.c
HEADER = includes/
OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCS)
	gcc -o $(OBJ) $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
