NAME = libft.a

CC = gcc 
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs 
RM = rm -f

SRCS = ft_isalnum.c \
       ft_strlen.c \
       ft_memcpy.c \
       ft_isalpha.c \
       ft_isdigit.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_memset.c \
       ft_bzero.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_strncmp.c \
       ft_strdup.c \
       ft_strcpy.c \
       ft_strcat.c \
       ft_strncat.c \
       ft_strstr.c \
       ft_memccpy.c \
       ft_strcmp.c \
       ft_strlcpy.c \
       ft_putendl.c \
       ft_putnbr.c \
       ft_putchar.c \
       ft_putstr.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re