# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 11:23:35 by gjoli             #+#    #+#              #
#    Updated: 2022/04/26 18:12:38 by gjoli            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FTPRINTF_SRC	:= 	ft_printf.c\
			ft_printf_tools.c
OBJ			:= $(FTPRINTF_SRC:.c=.o)
CFLAGS			:= -Wall -Wextra -Werror -I include
NAME			:= libftprintf.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:			clean
	$(RM) $(NAME) $(OBJ)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
