NAME = RPN
CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp RPN.cpp
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

.PHONY: all clean fclean re