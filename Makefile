# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ksmorozo <ksmorozo@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/10 19:37:56 by ksmorozo      #+#    #+#                  #
#    Updated: 2020/11/10 19:37:56 by ksmorozo      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c  ft_memccpy.c  ft_memset.c      ft_split.c    ft_strlcpy.c  ft_strrchr.c  libft.h \
ft_atoi.c     ft_isascii.c  ft_memchr.c   ft_putchar_fd.c  ft_strchr.c   ft_strlen.c   ft_strtrim.c \
ft_bzero.c    ft_isdigit.c  ft_memcmp.c   ft_putendl_fd.c  ft_strdup.c   ft_strmapi.c  ft_substr.c \
ft_calloc.c   ft_isprint.c  ft_memcpy.c   ft_putnbr_fd.c   ft_strjoin.c  ft_strncmp.c  ft_tolower.c \
ft_isalnum.c  ft_itoa.c     ft_memmove.c  ft_putstr_fd.c   ft_strlcat.c  ft_strnstr.c  ft_toupper.c
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all: $(NAME)

so:
	gcc -shared -o libft.so -fPIC $(OBJS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all