NAME = Array
CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp RPN.cpp
OBJDIR = Objs
OBJS = $(patsubst %.cpp, $(OBJDIR)/%.o, $(SRC))

# Ve se é Linux ou Windows
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
	MKDIR = mkdir -p
	RM = rm -rf
else
	# Windows (GnuWin32)
	MKDIR = if not exist $(OBJDIR) mkdir $(OBJDIR)
	RM = del /f
	RMDIR = rmdir /s /q
endif

# Criar pasta de objetos
$(shell $(MKDIR) $(OBJDIR))

# Compilar .cpp → .o
$(OBJDIR)/%.o: %.cpp
	@$(MKDIR) $(OBJDIR)
	@$(CC) -c $(FLAGS) -o $@ $<

# Linkar
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "╔══════════════════════════╗"
	@echo "║ ✅ Compiled Successfully!║"
	@echo "╚══════════════════════════╝"

all: $(NAME)

# Limpar arquivos
clean:
ifeq ($(UNAME_S),Linux)
	@$(RM) $(NAME) $(OBJDIR)
else
	@$(RM) $(NAME) 2>nul
	@$(RMDIR) $(OBJDIR) 2>nul
endif

fclean: clean

re: fclean all

.PHONY: all clean fclean re
