# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/13 09:31:05 by ppassos           #+#    #+#              #
#    Updated: 2026/07/13 09:33:09 by ppassos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp Span.cpp
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
	@$(RM) -r $(OBJDIR)

fclean: clean
	@$(RM) -r $(NAME)

re: fclean all
