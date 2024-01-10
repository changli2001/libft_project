NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS) -c
ARCHIVE = ar -rc $(NAME)
HEADER = libft.h


SOURCES_FILES =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
					ft_bzero.c	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
					ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c 	\
					ft_strnstr.c ft_atoi.c ft_memset.c ft_calloc.c ft_strdup.c ft_substr.c 		\
					ft_putchar_fd.c	ft_putstr_fd.c ft_putendl_fd.c ft_strjoin.c ft_strtrim.c 	\
					ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c

S_BONUSE_FILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

OBJECTS_FILES = $(SOURCES_FILES:.c=.o)
O_BONUS_FILES = $(S_BONUSE_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS_FILES)
	$(ARCHIVE) $(OBJECTS_FILES)


bonus: $(O_BONUS_FILES)
	$(ARCHIVE) $(O_BONUS_FILES)

%.o: %.c $(HEADER)
	$(COMPILE) $< -o $@

clean:
	rm -f $(OBJECTS_FILES)
	rm -f $(O_BONUS_FILES)
fclean: clean
	rm -f $(NAME)

re : fclean all

