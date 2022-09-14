NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRC = ft_atoi.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c

OBJS_NAME = $(SRC:.c=.o)

all: program

program: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -c
	ar -crs $(NAME) $(OBJS_NAME)
clean:
	$(RM) $(OBJS_NAME) 
fclean: clean
	$(RM) $(NAME)
re: fclean
	$(RM) $(NAME)
	$(CC) $(CFLAGS) $(SRC) -c
	ar -crs $(NAME) $(OBJS_NAME)

