NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = $(wildcard *.c)

SRC_BONUS = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstdelone.c \
	ft_lstlast.c \
	ft_lstnew.c \
	ft_lstsize.c

OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar crsv $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(OBJS_BONUS)
	ar crs $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re