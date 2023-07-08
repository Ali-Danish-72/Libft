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
			Part\ 1\ -\ Libc\ Functions/string_functions/ft_strrchr.c

CHK_DIR = \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isalnum.c \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isalpha.c \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isascii.c \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isdigit.c \
			Part\ 1\ -\ Libc\ Functions/checker_functions/ft_isprint.c

CONV_DIR = \
			Part\ 1\ -\ Libc\ Functions/converter_functions/ft_atoi.c \
			Part\ 1\ -\ Libc\ Functions/converter_functions/ft_tolower.c \
			Part\ 1\ -\ Libc\ Functions/converter_functions/ft_toupper.c

MEM_FIlES = \
			ft_bzero.o \
			ft_calloc.o \
			ft_memchr.o \
			ft_memcmp.o \
			ft_memcpy.o \
			ft_memmove.o \
			ft_memset.o

STR_FILES = \
			ft_strchr.o \
			ft_strdup.o \
			ft_strlen.o \
			ft_strlcat.o \
			ft_strlcpy.o \
			ft_strncmp.o \
			ft_strnstr.o \
			ft_strrchr.o

CHK_FILES = \
			ft_isalnum.o \
			ft_isalpha.o \
			ft_isascii.o \
			ft_isdigit.o \
			ft_isprint.o

CONV_FILES = \
			ft_atoi.o \
			ft_tolower.o \
			ft_toupper.o

OBJS = $(MEM_FIlES) $(STR_FILES) $(CHK_FILES) $(CONV_FILES)

# OBJ = $(FIlE:.c=.o) 

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(MEM_DIR) $(STR_DIR) $(CHK_DIR) $(CONV_DIR)
	ar ru $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re