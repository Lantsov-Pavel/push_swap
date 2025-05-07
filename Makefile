NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

SRC_DIR = src
OBJ_DIR = objects
LIBFT_DIR = includes/libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = main.c \
	$(SRC_DIR)/big_size_sort.c \
	$(SRC_DIR)/error_handler.c \
	$(SRC_DIR)/mid_size_sort.c \
	$(SRC_DIR)/push_operations.c \
	$(SRC_DIR)/reverse_rotate_operations.c \
	$(SRC_DIR)/rotate_operation.c \
	$(SRC_DIR)/small_size_sort.c \
	$(SRC_DIR)/sort.c \
	$(SRC_DIR)/stack_functions.c \
	$(SRC_DIR)/swap_operations.c \
	$(SRC_DIR)/utils.c

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ_DIRS) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re