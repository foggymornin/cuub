CC		:= gcc
CFLAGS	:= -Wall -Werror -Wextra -fsanitize=address -g
NAME	:= cub3D
SRC		:= test.c gnl/get_next_line.c gnl/get_next_line_utils.c get_map_settings.c utils.c draw.c
SRC_PATH := .
LIBFT_PATH	:= libft
LIBFT	:= $(LIBFT_PATH)/libft.a
LINK	:= -I /usr/share/man/man3 -L /usr/local/lib -lmlx -framework OpenGL -framework AppKit
all: $(NAME)

$(NAME): $(SRC)
		make -C $(LIBFT_PATH)
		$(CC) $(CFLAGS) $(SRC) $(LINK)  $(LIBFT) -o $(NAME)

clean:
	rm -rf $(NAME)
re: clean all