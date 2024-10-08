# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 10:17:43 by marias-e          #+#    #+#              #
#    Updated: 2022/09/26 10:27:26 by marias-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color Definition #
RED     := \033[0;31m
YELLOW  := \033[0;33m
BLUE    := \033[0;34m
GREEN   := \033[1;32m
MAGENTA := \033[0;35m
CYAN    := \033[0;36m
WHITE   := \033[0;37m
RESET   := \033[0m

# Output library
NAME = libft.a

# Directories
SRCDIR = src
OBJDIR = obj
INCDIR = include

# Source files
SRCS =		$(SRCDIR)/ft_atoi.c \
			$(SRCDIR)/ft_bzero.c \
			$(SRCDIR)/ft_calloc.c \
			$(SRCDIR)/ft_isalnum.c \
			$(SRCDIR)/ft_isalpha.c \
			$(SRCDIR)/ft_isascii.c \
			$(SRCDIR)/ft_isdigit.c \
			$(SRCDIR)/ft_isprint.c \
			$(SRCDIR)/ft_itoa.c \
			$(SRCDIR)/ft_memchr.c \
			$(SRCDIR)/ft_memcmp.c \
			$(SRCDIR)/ft_memcpy.c \
			$(SRCDIR)/ft_memmove.c \
			$(SRCDIR)/ft_memset.c \
			$(SRCDIR)/ft_putchar_fd.c \
			$(SRCDIR)/ft_putendl_fd.c \
			$(SRCDIR)/ft_putnbr_fd.c \
			$(SRCDIR)/ft_putstr_fd.c \
			$(SRCDIR)/ft_split.c \
			$(SRCDIR)/ft_strchr.c \
			$(SRCDIR)/ft_strdup.c \
			$(SRCDIR)/ft_strjoin.c \
			$(SRCDIR)/ft_striteri.c \
			$(SRCDIR)/ft_strlcat.c \
			$(SRCDIR)/ft_strlcpy.c \
			$(SRCDIR)/ft_strlen.c \
			$(SRCDIR)/ft_strmapi.c \
			$(SRCDIR)/ft_strncmp.c \
			$(SRCDIR)/ft_strnstr.c \
			$(SRCDIR)/ft_strrchr.c \
			$(SRCDIR)/ft_strtrim.c \
			$(SRCDIR)/ft_substr.c \
			$(SRCDIR)/ft_tolower.c \
			$(SRCDIR)/ft_toupper.c \
			$(SRCDIR)/ft_lstnew_bonus.c \
			$(SRCDIR)/ft_lstadd_front_bonus.c \
			$(SRCDIR)/ft_lstsize_bonus.c \
			$(SRCDIR)/ft_lstlast_bonus.c \
			$(SRCDIR)/ft_lstadd_back_bonus.c \
			$(SRCDIR)/ft_lstdelone_bonus.c \
			$(SRCDIR)/ft_lstclear_bonus.c \
			$(SRCDIR)/ft_lstiter_bonus.c \
			$(SRCDIR)/ft_lstmap_bonus.c

# Object files
OBJS =		$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

# Compiler and flags
CC = gcc

FLAGS = -Wall -Wextra -Werror -I $(INCDIR)

# Test files
TEST_EXEC = test_program

TEST_SRC = main.c

# Default target that will be run by default
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(YELLOW)libft.a $(GREEN)compiled successfully.$(RESET)"

# Rule to compile .c files into .o files in obj/
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@

# Create the obj directory if it doesn't exist
$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Rule to compile and run the test program
test: $(NAME) $(TEST_SRC)
	@$(CC) $(FLAGS) $(TEST_SRC) -L. -lft -o $(TEST_EXEC)
	@echo "$(BLUE)Compiling and executing $(MAGENTA)test_program$(BLUE).$(RESET)"
	./$(TEST_EXEC)

# Clean up object files and the library
clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJDIR)
	@rm -f $(TEST_EXEC)
	@echo "$(RED)Removing objects and $(MAGENTA)test_program$(RED).$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Removing $(YELLOW)libft.a$(RED).$(RESET)"

re: fclean all

# Phony targets
.PHONY: all clean fclean re test
