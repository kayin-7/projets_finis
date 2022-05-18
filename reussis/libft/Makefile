# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 11:23:35 by gjoli             #+#    #+#              #
#    Updated: 2022/04/17 18:18:53 by gjoli            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BASE_SRC		:= ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

BONUS_SRC		:= $(BASE_SRC) \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c \

BONUS_SRC		:= $(sort $(BONUS_SRC))

OBJ				:= $(BASE_SRC:.c=.o)
BONUS_OBJ		:= $(BONUS_SRC:.c=.o)
CFLAGS			:= -Wall -Wextra -Werror -I.
NAME			:= libft.a
LIBSHARE		:= libft.so

all:			$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJ)
	ar rcs $(NAME) $(OBJ)
so:
	$(CC) -c -fPIC $(CFLAGS) $(BASE_SRC)
	gcc -nostartfiles -shared -o $(LIBSHARE) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(BONUS_OBJ)
	$(RM) $(LIBSHARE)

fclean:			clean
	$(RM) $(NAME) $(LIBSHARE)

re:				fclean $(NAME)

bonus:			$(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

.PHONY:			all clean fclean re
