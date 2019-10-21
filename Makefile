# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abadidi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 12:27:55 by abadidi           #+#    #+#              #
#    Updated: 2019/10/21 22:40:22 by abadidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS = libft.h
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	  ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
	  ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
			gcc -Wall -Werror -Wextra -c $(SRC)
			ar -rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
			/bin/rm -f $(NAME) $(OBJ)

fclean:	clean
			rm -f $(NAME)

re:		fclean all
