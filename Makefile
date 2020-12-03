# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ksmorozo <ksmorozo@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/10 19:37:56 by ksmorozo      #+#    #+#                  #
#    Updated: 2020/12/03 22:09:44 by anonymous     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
REG_OBJ_FILES = ft_isalpha.o ft_memccpy.o \
ft_memset.o ft_split.o \
ft_strlcpy.o ft_strrchr.o \
ft_atoi.o ft_isascii.o \
ft_memchr.o ft_putchar_fd.o \
ft_strchr.o ft_strlen.o \
ft_strtrim.o ft_bzero.o \
ft_isdigit.o ft_memcmp.o \
ft_putendl_fd.o ft_strdup.o \
ft_strmapi.o ft_substr.o \
ft_calloc.o ft_isprint.o \
ft_memcpy.o ft_putnbr_fd.o \
ft_strjoin.o ft_strncmp.o \
ft_tolower.o ft_isalnum.o \
ft_itoa.o ft_memmove.o \
ft_putstr_fd.o ft_strlcat.o \
ft_strnstr.o ft_toupper.o
BONUS_OBJ_FILES = ft_lstnew.o ft_lstadd_front.o \
ft_lstsize.o ft_lstlast.o \
ft_lstadd_back.o ft_lstiter.o \
ft_lstdelone.o ft_lstclear.o \
ft_lstmap.o
HEADER_FILES = libft.h
CFLAGS = -Wall -Wextra -Werror

ifdef WITH_BONUS
OBJ_FILES = $(REG_OBJ_FILES) $(BONUS_OBJ_FILES)
else
OBJ_FILES = $(REG_OBJ_FILES)
endif

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rc $@ $^
	ranlib $@

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(REG_OBJ_FILES) $(BONUS_OBJ_FILES)

fclean: clean
	rm -f $(NAME)

so:
	$(CC) -shared -o libft.so -fPIC $(REG_OBJ_FILES) $(BONUS_OBJ_FILES)

bonus:
	$(MAKE) WITH_BONUS=1 all

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
