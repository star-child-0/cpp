# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 11:11:56 by anvannin          #+#    #+#              #
#    Updated: 2023/08/10 08:46:33 by anvannin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

CC		= c++
CFLAGS	= -Wall -Wextra -Werror
STD		= -std=c++98
OBJ_DIR	= .build
OBJS	= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
SRCS	= \
		main.cpp \
		Contact.cpp \
		PhoneBook.cpp

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
	@echo "$(GREEN)[✔️] $(WHITE)$(BOLD)$(NAME) created!$(UNSET)"

$(OBJS): $(OBJ_DIR)/%.o: %.cpp
	@mkdir -p .build
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)[!] $(WHITE)$(BOLD)$(NAME) object files deleted!$(UNSET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)[✕] $(WHITE)$(BOLD)$(NAME) deleted!$(UNSET)"

re: fclean all

.PHONY:
.SILENT:
