# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlevine <rlevine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/21 17:18:42 by sjones            #+#    #+#              #
#    Updated: 2017/11/17 15:01:10 by rlevine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
CC = gcc
FLAGS = -Wall -Wextra -Werror
MLX = -L minilibx_macos -lmlx -framework OpenGL -framework AppKit
LFT = -L libft -lft
SRC_PATH =	src
SRC_NAME =	key_hooks.c \
			loop_hook.c \
			read_map.c \
			init.c \
			init_bresen.c \
			main.c \
			translate.c \
			zoom.c \
			draw_map.c \
			draw_line.c \
			rotate.c \
			colorhandler.c \
			put_to_center.c
SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJ =	$(SRC_NAME:%.c=%.o)
INCL = inc/fdf.h
all: $(NAME)

$(NAME):
	@echo "\033[1;33mFDF: Sources compiling... \033[0m"
	@make -C libft/
	@$(CC) $(FLAGS) -I $(INCL) -c $(SRC)
	@$(CC) -o $(NAME) $(OBJ) $(LFT) $(MLX)
	@echo "\033[1;34mFDF: Compiled with success..!\033[0m"

clean:
	@make -C libft/ clean
	@/bin/rm -rf $(OBJ)
	@echo "\033[0;36mObjects removed...\033[0m"

fclean: clean
	@make -C libft/ fclean
	@/bin/rm -rf $(NAME)
	@echo "\033[0;36mFDF binary removed...\033[0m"

re: fclean all
