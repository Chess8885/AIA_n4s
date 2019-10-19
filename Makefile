##
## EPITECH PROJECT, 2019
## n4s
## File description:
## Makefile
##

NAME		=	ai

SRC		=	src/main.c \
			src/start_simulation.c \
			src/loop_simulation.c \
			src/is_a_command_to_vrep.c \
			src/send_command_to_vrep.c \
			src/get_car_input.c \
			src/car_forward.c \
			src/track_car.c \
			src/check_track_car.c \
			src/wheels_dir.c \
			src/stop_simulation.c \
			src/lib/my_putchar.c \
			src/lib/my_putstr.c \
			src/lib/my_strlen.c \
			src/lib/my_str_to_word_array.c \
			src/lib/my_array_to_float.c \

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

CFLAGS		=	-Wall -Werror -Wall -Wextra -I include

RM		=	rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
