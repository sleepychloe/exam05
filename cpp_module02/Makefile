# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 22:53:53 by yhwang            #+#    #+#              #
#    Updated: 2023/05/03 22:57:04 by yhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp02
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS_DIR = ./

FILES = $(SRCS_DIR)main \
		$(SRCS_DIR)Warlock \
		$(SRCS_DIR)ASpell \
		$(SRCS_DIR)ATarget \
		$(SRCS_DIR)Fwoosh \
		$(SRCS_DIR)Dummy \
		$(SRCS_DIR)Fireball \
		$(SRCS_DIR)Polymorph \
		$(SRCS_DIR)BrickWall \
		$(SRCS_DIR)SpellBook \
		$(SRCS_DIR)TargetGenerator


SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
