# NOMBRE PROGRAMA #
NAME = libft.a

# FLAGS DE COMPILACION #
CC = gcc
CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address

# ARCHIVOS #
SRC =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \

SRC_BONUS =	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \

# OBJETOS (*.o) #
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

INCLUDE = libft.h

# MAKEFILE ART #
# COLORS #
BLACK=\033[0;30m
RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAG=\033[0;35m
CYAN=\033[0;36m
WHITE=\033[0;37m
PAPYRUS=\033[38;5;223m
END=\033[0m

# VARIABLE DE ENTORNO #
define LIBFT
$(MAG)
██╗     ██╗██████╗ ███████╗████████╗
██║     ██║██╔══██╗██╔════╝╚══██╔══╝
██║     ██║██████╔╝█████╗     ██║   
██║     ██║██╔══██╗██╔══╝     ██║   
███████╗██║██████╔╝██║        ██║   
╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   
$(END)                                    
endef
export LIBFT

define BONUS
$(GREEN)
██████╗  ██████╗ ███╗   ██╗██╗   ██╗███████╗
██╔══██╗██╔═══██╗████╗  ██║██║   ██║██╔════╝
██████╔╝██║   ██║██╔██╗ ██║██║   ██║███████╗
██╔══██╗██║   ██║██║╚██╗██║██║   ██║╚════██║
██████╔╝╚██████╔╝██║ ╚████║╚██████╔╝███████║
╚═════╝  ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝
$(GREEN)
endef
export BONUS                                

# REGLAS #
.SILENT:

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar rc $(NAME) $(OBJ)
	echo "$$LIBFT"

bonus: $(OBJ) $(OBJ_BONUS) $(INCLUDE)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	echo "$$BONUS"

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(OBJ_BONUS): $(SRC_BONUS)
	$(CC) $(CFLAGS) -c $(SRC_BONUS)


clean:
	rm -r *.o

fclean: clean
	rm -r $(NAME)

re: fclean all
