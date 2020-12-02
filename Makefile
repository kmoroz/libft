# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ksmorozo <ksmorozo@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/10 19:37:56 by ksmorozo      #+#    #+#                  #
#    Updated: 2020/12/02 20:15:27 by anonymous     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_memccpy.c \
ft_memset.c ft_split.c \
ft_strlcpy.c ft_strrchr.c \
ft_atoi.c ft_isascii.c \
ft_memchr.c ft_putchar_fd.c \
ft_strchr.c ft_strlen.c \
ft_strtrim.c ft_bzero.c \
ft_isdigit.c ft_memcmp.c \
ft_putendl_fd.c ft_strdup.c \
ft_strmapi.c ft_substr.c \
ft_calloc.c ft_isprint.c \
ft_memcpy.c ft_putnbr_fd.c \
ft_strjoin.c ft_strncmp.c \
ft_tolower.c ft_isalnum.c \
ft_itoa.c ft_memmove.c \
ft_putstr_fd.c ft_strlcat.c \
ft_strnstr.c ft_toupper.c
BSRCS = ft_lstnew.c ft_lstadd_front.c \
ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstiter.c \
ft_lstdelone.c ft_lstclear.c \
ft_lstmap.c
FLAGS = -Wall -Wextra -Werror -g
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)
CC = cc

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

so:
	$(CC) -shared -o libft.so -fPIC $(OBJS) $(BOBJS)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

bonus: $(BSRCS)
	$(CC) $(FLAGS) -c $(BSRCS)
	ar rcs $(NAME) $(BOBJS)

re: fclean all
