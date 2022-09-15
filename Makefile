NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRC = ft_atoi.c\
			ft_strncmp.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c∫

OBJS_NAME = $(SRC:.c=.o)

all: program

program: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -c
	ar -crs $(NAME) $(OBJS_NAME)
clean:
	$(RM) $(OBJS_NAME) 
fclean: clean
	$(RM) $(NAME)
re: all fclean
