CC = cc

#CFLAGS = -Wall -Wextra -Werror

NAME = get_next_line

FILES = get_next_line_utils.c get_next_line.c

SRCS = $(FILES)

OFILES = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
				ar rcs $(NAME) $(OFILES)

clean:
				rm -f $(OFILES)

fclean:
				rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
