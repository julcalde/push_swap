NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
OBJ_DIR := ./obj
DEP_DIR := $(OBJ_DIR)/.deps
INC_DIRS := ./
SRC_DIRS := ./
vpath %.c $(SRC_DIRS)
vpath %.h $(INC_DIRS)
vpath %.d $(DEP_DIR)

LIBFT_DIR = $(INC_DIRS)/libft
LIBFT = libft.a
LIBFT_LIB = $(LIBFT_DIR)/$(LIBFT)
LIBFTFLAGS = -L$(LIBFT_DIR) -lft
LIBFT_REPO = https://github.com/julcalde/libft_updated.git

RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
NC = \033[0m
CLEAR_LINE = \033[2K\r

SRCS =			push_swap.c split_args.c utility_ft0.c ft_lst.c i_see_double.c sorting.c commands.c

# Object files
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

TOTAL_SRCS = $(words $(SRCS))
CURRENT = 0

# Default rule to compile all
all: init-submodules $(NAME)

-include $(OBJS:.o=.d)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(eval CURRENT := $(shell echo $$(($(CURRENT) + 1))))
	@$(eval PERCENT := $(shell echo $$(($(CURRENT) * 100 / $(TOTAL_SRCS)))))
	@printf "$(CLEAR_LINE)$(YELLOW)🚧 Compiling $(PERCENT)%% [$(CURRENT)/$(TOTAL_SRCS)] $(CYAN)$<$(NC) 🚧"
	@$(CC) $(CFLAGS) -c $< -o $@

# Initialize submodules
init-submodules: init-libft

#Initialize libft
init-libft:
	@sleep 0.15
	@if [ ! -d "$(LIBFT_DIR)" ]; then \
		echo "$(YELLOW)🚧 Adding LIBFT submodule 🚧$(NC)"; \
		git submodule add $(LIBFT_REPO) $(LIBFT_DIR) > /dev/null 2>&1 || (echo "$(RED)Failed to add libft submodule$(NC)" && exit 1); \
	elif [ -z "$$(ls -A $(LIBFT_DIR) 2>/dev/null)" ]; then \
		echo "$(CYAN)🔄 Updating LIBFT submodule 🔄$(NC)"; \
		git submodule update --init --recursive $(LIBFT_DIR) > /dev/null 2>&1 || (echo "$(RED)Failed to update libft submodule$(NC)" && exit 1); \
	else \
		echo "$(GREEN)✅ LIBFT submodule is already initialized ✅$(NC)"; \
	fi

#Remove submodules
remove-submodules: remove-libft

#Remove libft
remove-libft:
	@if [ -d "$(LIBFT_DIR)" ]; then \
		git submodule deinit -q -f $(LIBFT_DIR) > /dev/null 2>&1; \
		git rm -q -f $(LIBFT_DIR) > /dev/null 2>&1; \
		rm -rf .git/modules/$(LIBFT_DIR) > /dev/null 2>&1; \
	fi


#Rule to compile libft
$(LIBFT_LIB): init-libft
	@if [ ! -f "$(LIBFT_LIB)" ]; then \
		echo "$(CLEAR_LINE)$(YELLOW)🚧 Building LIBFT 🚧$(NC)"; \
		$(MAKE) -C $(LIBFT_DIR); \
	fi

#Rule to compile program
$(NAME): init-submodules $(LIBFT_LIB) $(OBJS)
	@echo "$(CLEAR_LINE)$(YELLOW)🚧 Building PUSH_SWAP 🚧$(NC)"
	@$(CC) -o $(NAME) $(OBJS) $(LIBFTFLAGS)
	@echo "$(CLEAR_LINE)$(GREEN)✅ Done Compiling ✅$(NC)"

# Clean object files and libraries
clean: remove-submodules
	@rm -rf $(OBJ_DIR)
	@rm -rf $(LIBFT_DIR)

# Clean all generated files
fclean: clean
	@echo "$(YELLOW)🚧 Cleaning 🚧$(NC)"
	@sleep 0.15
	@printf "$(RED)🧹 Cleaning in Progress 🧹$(NC)\n"
	@sleep 0.15
	@printf "$(YELLOW)🛁 Scrubbing Code 🛁$(NC)\n"
	@sleep 0.15
	@printf "$(CYAN)🧽 Polishing Project 🧽$(NC)\n"
	@sleep 0.15
	@printf "$(MAGENTA)🧴 Tidying Up 🧴$(NC)\n"
	@sleep 0.15
	@printf "$(GREEN)✅ Done Cleaning ✅$(NC)\n"
	@rm -rf $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re libft init-submodules remove-submodules