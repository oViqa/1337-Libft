NAME = libft.a

CC = cc 
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs 
RM = rm -f

BONUS = ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstdelone_bonus.c \

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
	ft_strstr.c \
	ft_strcmp.c \
	ft_strlcpy.c \
	ft_split.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_substr.c \
	ft_calloc.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus