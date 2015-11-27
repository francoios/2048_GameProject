# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/27 20:27:42 by tdemay            #+#    #+#              #
#    Updated: 2015/02/28 17:36:15 by tdemay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	game_2048

NAMEBASE	=	$(shell basename $(NAME))

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

LIBS		=	-lncurses

SRCBASE		=	\
				main.c \
				routine_ncurses.c \
				int_tab.c \
				fusion.c \
				move.c \
				util.c \
				verif.c \
				menu.c \
				highscore.c \
				get_high_score.c \
				get_name.c

SRCS		=	$(SRCBASE)

OBJS		=	$(SRCBASE:.c=.o)

.SILENT:

all: $(NAME)
	echo "\033[38;5;44m✅  ALL    $(NAMEBASE) is done\033[0m\033[K"

$(NAME): $(OBJS) $(NAME).h ./libft/libft.a
	$(CC) $(FLAGS) $(LIBS) -o $(NAME) $(OBJS) ./libft/libft.a
	echo -en "\r\033[38;5;22m✅  MAKE   $(NAMEBASE)\033[0m\033[K"

%.o: %.c $(NAME).h
	$(CC) $(FLAGS) -c $< -o $@

./libft/libft.a:
	make -C libft/ fclean
	make -C libft/

clean:
	printf "\r\033[38;5;11m⌛  CLEAN  $(NAMEBASE) plz wait ...\033[0m\033[K"
	make -C libft/ fclean
	if [[ `rm $(OBJS) &> /dev/null 2>&1; echo $$?` == "0" ]]; then           \
		echo -en "\r\033[38;5;124m🔘  CLEAN  $(NAMEBASE)\033[0m\033[K";      \
	else                                                                     \
		printf "\r";                                                         \
	fi

fclean: clean
	printf "\r\033[38;5;11m⌛  FCLEAN $(NAMEBASE) plz wait ...\033[0m\033[K"
	make -C libft/ fclean
	if [[ `rm $(NAME) &> /dev/null 2>&1; echo $$?` == "0" ]]; then           \
		echo -en "\r\033[38;5;124m🔘  FCLEAN $(NAMEBASE)\033[0m\033[K";      \
	else                                                                     \
		printf "\r";                                                         \
	fi

re:			fclean all ./libft/libft.a

.PHONY:		fclean clean re
