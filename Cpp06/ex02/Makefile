NAME	= RealType

CC		= c++
CFLAGS	= -Wall -Wextra -Werror
STD		= -std=c++98
SRCS	= \
		main.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp \
		utils.cpp

OBJ_DIR	= .build
OBJS	= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

# Colors
RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
WHITE	= \033[0;37m
BOLD	= \033[1m
UNSET	= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(STD) $(SRCS) -o $(NAME)
	@echo "$(GREEN)[✓] $(WHITE)$(BOLD)$(NAME) created!$(UNSET)"

$(OBJS): $(OBJ_DIR)/%.o: %.cpp
	@mkdir -p .build
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) *_shrubbery
	@echo "$(YELLOW)[!] $(WHITE)$(BOLD)$(NAME) object files deleted!$(UNSET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)[✕] $(WHITE)$(BOLD)$(NAME) deleted!$(UNSET)"

re: fclean all

.PHONY:
.SILENT:
