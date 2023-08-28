###############################################################################
#                                  VARIABLES                                  #
###############################################################################

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
OBJS = \
	$(CHECKERS_OBJS) \
	$(CONVERTERS_ONE_OBJS) \
	$(CONVERTERS_TWO_OBJS) \
	$(LISTS_OBJS) \
	$(MEMORY_OBJS) \
	$(PUT_FD_OBJS) \
	$(STRINGS_ONE_OBJS) \
	$(STRINGS_TWO_OBJS)
HEAD = ./
PART_ONE_PATH = ./Part_1-Libc_Functions/
PART_TWO_PATH = ./Part_2-Additional_Functions/

all: $(NAME)

###############################################################################
#                                   BONUS                                     #
###############################################################################

BONUS_DIR = ./Bonus_Functions/
BONUS_FILES = \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c
BONUS_SRCS = $(addprefix $(BONUS_DIR), $(BONUS_FILES))

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

$(BONUS_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

###############################################################################
#                                  CHECKERS                                   #
###############################################################################

CHECKERS_DIR = $(PART_ONE_PATH)checker_functions/
CHECKERS_FILES = \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c
CHECKERS_SRCS = $(addprefix $(CHECKERS_DIR), $(CHECKERS_FILES))

CHECKERS_OBJS = $(CHECKERS_SRCS:.c=.o)

$(CHECKERS_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

###############################################################################
#                              CONVERTERS - PART 1                            #
###############################################################################

CONVERTERS_ONE_DIR = $(PART_ONE_PATH)converter_functions/
CONVERTERS_ONE_FILES = \
		ft_atoi.c \
		ft_tolower.c \
		ft_toupper.c
CONVERTERS_ONE_SRCS = $(addprefix $(CONVERTERS_ONE_DIR), $(CONVERTERS_ONE_FILES))

CONVERTERS_ONE_OBJS = $(CONVERTERS_ONE_SRCS:.c=.o)

$(CONVERTERS_ONE_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

###############################################################################
#                                   MEMORY                                    #
###############################################################################

MEMORY_DIR = $(PART_ONE_PATH)memory_functions/
MEMORY_FILES = \
		ft_bzero.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c

MEMORY_OBJS = $(MEMORY_SRCS:.c=.o)

$(MEMORY_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

###############################################################################
#                              STRINGS - PART 1                               #
###############################################################################

STRINGS_ONE_DIR = $(PART_ONE_PATH)string_functions/
STRINGS_ONE_FILES = \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c
STRINGS_ONE_SRCS = $(addprefix $(STRINGS_ONE_DIR), $(STRINGS_ONE_FILES))

STRINGS_ONE_OBJS = $(STRINGS_SRCS:.c=.o)

$(STRINGS_ONE_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

###############################################################################
#                              CONVERTERS - PART 2                            #
###############################################################################

CONVERTERS_TWO_DIR = $(PART_TWO_PATH)converter_functions/
CONVERTERS_TWO_FILES = \
		ft_itoa.c
CONVERTERS_TWO_SRCS = $(addprefix $(CONVERTERS_TWO_DIR), $(CONVERTERS_TWO_FILES))

CONVERTERS_TWO_OBJS = $(CONVERTERS_TWO_SRCS:.c=.o)

$(CONVERTERS_TWO_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

###############################################################################
#                                   PUT_FD                                    #
###############################################################################

PUT_FD_DIR = $(PART_TWO_PATH)print_functions/
PUT_FD_FILES = \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c
PUT_FD_SRCS = $(addprefix $(PUT_FD_DIR), $(PUT_FD_FILES))

PUT_FD_OBJS = $(PUT_FD_SRCS:.c=.o)

$(PUT_FD_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

###############################################################################
#                                  STRINGS                                    #
###############################################################################

STRINGS_TWO_DIR = $(PART_TWO_PATH)string_functions/
STRINGS_TWO_FILES = \
		ft_split.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c
STRINGS_TWO_SRCS = $(addprefix $(STRINGS_TWO_DIR), $(STRINGS_TWO_FILES))

STRINGS_TWO_OBJS = $(STRINGS_TWO_SRCS:.c=.o)

$(STRINGS_TWO_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

###############################################################################
#                                  EXECUTION                                  #
###############################################################################

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

$(NAME): $(OBJS)
	ar rus $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
