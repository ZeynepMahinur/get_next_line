CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = get_next_line

FILES = get_next_line_utils.c get_next_line.c
BONUS_FILES = get_next_line_utils_bonus.c  get_next_line_bonus.c

SRCS = $(FILES)
BONUS_SRCS = $(BONUS_FILES)

OFILES = $(SRCS:.c=.o)
BONUS_OFILES = $(BONUS_SRCS:.c=.o)

all: $(NAME)

bonus: $(NAME)_bonus

$(NAME): $(OFILES)
		ar rcs $(NAME) $(OFILES)

$(NAME)_bonus: $(BONUS_OFILES)
		ar rcs $(NAME)_bonus $(BONUS_OFILES)

clean:
		rm -f $(OFILES) $(BONUS_OFILES)

fclean: clean
		rm -f $(NAME) $(NAME)_bonus

re: fclean all

.PHONY: all clean fclean re bonus