# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 08:58:49 by ppassos           #+#    #+#              #
#    Updated: 2025/09/04 10:55:54 by ppassos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp

OBJDIR = Objs
OBJS = $(patsubst %.cpp, $(OBJDIR)/%.o, $(SRC))

$(shell mkdir -p $(OBJDIR))

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@ $(CC) -c $(FLAGS) -o $@ $<

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "╔══════════════════════════╗"
	@echo "║ ✅ Compiled Successfully!║"
	@echo "╚══════════════════════════╝"

all: $(NAME)

clean:
	@$(RM) -r $(NAME)
	@$(RM) -r $(OBJDIR)

fclean: clean

re: fclean all

.PHONY: all clean fclean re