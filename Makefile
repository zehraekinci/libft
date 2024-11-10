# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 05:19:25 by zeekinci          #+#    #+#              #
#    Updated: 2024/11/10 20:41:10 by zeekinci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
NAME_BONUS = libft_bonus.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_memcmp.c \
      ft_strncmp.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_atoi.c \
      ft_bzero.c \
      ft_memset.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memchr.c \
      ft_calloc.c \
      ft_striteri.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_strmapi.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strnstr.c \
      ft_itoa.c \
      ft_strlcpy.c \
      ft_strlcat.c

BONUS_SRC = ft_lstnew.c \
           ft_lstadd_front.c \
           ft_lstsize.c \
           ft_lstlast.c \
           ft_lstadd_back.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(NAME) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
