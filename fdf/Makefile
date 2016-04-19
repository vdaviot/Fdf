# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/09 15:41:55 by vdaviot           #+#    #+#              #
#    Updated: 2015/07/16 23:22:11 by vdaviot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = key/ft_key_hook.c window/ft_draw.c key/ft_expose_hook.c main.c func/get_next_line.c
SRC += func/ft_get_param.c func/ft_add_param_to_struct.c window/ft_image_pixel_put.c func/ft_dup_struct.c
SRC += func/ft_dup_lst.c func/ft_destroy_struct.c func/ft_get_size.c key/ft_key1.c key/ft_key2.c key/ft_trans.c
SRC += key/ft_rollface_color.c

INCLUDE = includes/libft.a -I includes/

OBJ = key/ft_key_hook.o window/ft_draw.o key/ft_expose_hook.o main.o func/get_next_line.o

COMPIL = gcc

MAP = ../../../test_maps/42.fdf

all: comp

comp:
	@clear
	@$(COMPIL) -L includes/ -lft -lmlx -I includes/libft.h includes/libft.a -framework OpenGL -framework Appkit $(SRC) $(INCLUDE) -o $(NAME) && rm -rf fdf.dSYM

libft:
	@cd func/libft && make

port:
	@clear
	@$(COMPIL) $(SRC) -o $(NAME) -g -L /usr/X11/lib -lmlx -lXext -lX11 -I . -I func/libft/ libft.a

go: comp
	@./fdf $(MAP)
clean:
	@rm fdf
fclean:
	@rm fdf
re: all
