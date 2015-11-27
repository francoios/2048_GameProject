#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/01 19:15:57 by tdemay            #+#    #+#              #
#    Updated: 2013/12/01 19:16:02 by tdemay           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS_P1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c	ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c

SRCS_P2 = ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_B = ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
		ft_lstmap.c

SRCS_GNL = get_next_line.c

OBJS	= $(SRCS_P1:.c=.o) $(SRCS_P2:.c=.o) $(SRCS_B:.c=.o) $(SRCS_GNL:.c=.o)

.SILENT:

all: $(NAME)
	echo "\033[38;5;44m✅  ALL    $(NAME) is done\033[0m\033[K"

$(NAME): $(OBJS)
	echo -en "\r\033[38;5;22m✅  MAKE   $(NAME)\033[0m\033[K"
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	printf "\r\033[38;5;11m⌛  MAKE   $(NAME) plz wait ...\033[0m\033[K"
	gcc $(FLAGS) -o $@ -c $<

clean:
	printf "\r\033[38;5;11m⌛  CLEAN  $(NAME) plz wait ...\033[0m\033[K"
	if [[ `rm $(OBJS) &> /dev/null 2>&1; echo $$?` == "0" ]]; then           \
		echo -en "\r\033[38;5;124m🔘  CLEAN  $(NAME)\033[0m\033[K";      \
	else                                                                     \
		printf "\r";                                                         \
	fi

fclean: clean
	printf "\r\033[38;5;11m⌛  FCLEAN $(NAME) plz wait ...\033[0m\033[K"
	if [[ `rm $(NAME) &> /dev/null 2>&1; echo $$?` == "0" ]]; then           \
		echo -en "\r\033[38;5;124m🔘  FCLEAN $(NAME)\033[0m\033[K";      \
	else                                                                     \
		printf "\r";                                                         \
	fi

re: fclean all

.PHONY:		fclean clean re
