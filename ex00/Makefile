# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 12:37:38 by vfuhlenb          #+#    #+#              #
#    Updated: 2023/02/25 22:05:33 by vfuhlenb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#pragma once
NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS_PATH = $(PWD)

SRCS_FILES =	$(shell ls ./ | grep .cpp$)

SRCS = $(addprefix $(SRCS_PATH)/,$(SRCS_FILES))

OBJS = ${SRCS:.cpp=.o}

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "\033[32mprogram\033[32;1m ./$(NAME) \033[0m\033[32mcompiled\033[0m"

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[32mdirectory cleaned\033[0m"

re: fclean all

.PHONY: all clean fclean re
