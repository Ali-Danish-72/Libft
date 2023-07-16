NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

MEM_DIR = \
			Part\ 1\ -\ Libc\ Functions/memory_functions/ft_bzero.c \
			Part\ 1\ -\ Libc\ Functions/memory_functions/ft_calloc.c \
			Part\ 1\ -\ Libc\ Functions/memory_functions/ft_memchr.c \
			Part\ 1\ -\ Libc\ Functions/memory_functions/ft_memcmp.c \
			Part\ 1\ -\ Libc\ Functions/memory_functions/ft_memcpy.c \
			Part\ 1\ -\ Libc\ Functions/memory_functions/ft_memmove.c \
			Part\ 1\ -\ Libc\ Functions/memory_functions/ft_memset.c

STR_DIR = \
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strchr.c \
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strdup.c \
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strlen.c \
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strlcat.c \
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strlcpy.c \
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strncmp.c \
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strnstr.c \
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strrchr.c \
			Part\ 2\ -\ Additional\ Functions/string_functions/ft_split.c \
			Part\ 2\ -\ Additional\ Functions/string_functions/ft_striteri.c \
			Part\ 2\ -\ Additional\ Functions/string_functions/ft_strjoin.c \
			Part\ 2\ -\ Additional\ Functions/string_functions/ft_strmapi.c \
			Part\ 2\ -\ Additional\ Functions/string_functions/ft_strtrim.c \
			Part\ 2\ -\ Additional\ Functions/string_functions/ft_substr.c

CHK_DIR = \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isalnum.c \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isalpha.c \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isascii.c \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isdigit.c \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isprint.c

CONV_DIR = \
			Part\ 1\ -\ Libc\ Functions/converter_functions/ft_atoi.c \
			Part\ 1\ -\ Libc\ Functions/converter_functions/ft_tolower.c \
			Part\ 1\ -\ Libc\ Functions/converter_functions/ft_toupper.c \
			Part\ 2\ -\ Additional\ Functions/converter_functions/ft_itoa.c

PRT_DIR = \
			Part\ 2\ -\ Additional\ Functions/print_functions/ft_putchar_fd.c \
			Part\ 2\ -\ Additional\ Functions/print_functions/ft_putendl_fd.c \
			Part\ 2\ -\ Additional\ Functions/print_functions/ft_putnbr_fd.c \
			Part\ 2\ -\ Additional\ Functions/print_functions/ft_putstr_fd.c \

MEM_FIlES = \
			ft_bzero.o \
			ft_calloc.o \
			ft_memchr.o \
			ft_memcmp.o \
			ft_memcpy.o \
			ft_memmove.o \
			ft_memset.o

STR_FILES = \
			ft_split.o \
			ft_strchr.o \
			ft_strdup.o \
			ft_striteri.o \
			ft_strjoin.o \
			ft_strlen.o \
			ft_strlcat.o \
			ft_strlcpy.o \
			ft_strmapi.o \
			ft_strncmp.o \
			ft_strnstr.o \
			ft_strrchr.o \
			ft_strtrim.o \
			ft_substr.o

CHK_FILES = \
			ft_isalnum.o \
			ft_isalpha.o \
			ft_isascii.o \
			ft_isdigit.o \
			ft_isprint.o

CONV_FILES = \
			ft_atoi.o \
			ft_itoa.o \
			ft_tolower.o \
			ft_toupper.o

PRT_FILES = \
			ft_putchar_fd.o \
			ft_putendl_fd.o \
			ft_putnbr_fd.o \
			ft_putstr_fd.o

OBJS = $(MEM_FIlES) $(STR_FILES) $(CHK_FILES) $(CONV_FILES) $(PRT_FILES)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(MEM_DIR) $(STR_DIR) $(CHK_DIR) $(CONV_DIR) $(PRT_DIR)
	ar ru $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re