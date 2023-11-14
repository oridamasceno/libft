NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c
SOURCES += ft_isascii.c ft_isprint.c ft_strlen.c
SOURCES += ft_tolower.c ft_toupper.c
SOURCES += ft_memset.c ft_bzero.c ft_memcpy.c
SOURCES += ft_memmove.c ft_strlcpy.c ft_strlcat.c
SOURCES += ft_strchr.c ft_strrchr.c ft_strncmp.c
SOURCES += ft_memchr.c ft_memcmp.c ft_strnstr.c
SOURCES += ft_atoi.c ft_calloc.c ft_strdup.c
SOURCES += ft_substr.c ft_strjoin.c ft_strtrim.c
SOURCES += ft_split.c ft_putchar_fd.c ft_putstr_fd.c
SOURCES += ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c
SOURCES += ft_striteri.c ft_itoa.c

OBJECTS = ${SOURCES:.c=.o}


RM = rm -f


CC = cc


CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "-------------\n42@compiled ✔︎\nMachine is working!\n-------------------"
MSG2 = @echo "------------\n42@cleaned ✔︎\nWe cleaned the floor and now there's no .o files!\n-------------------------------------------------"


ARCHIVE = @ar -rcs


BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c
BONUS += ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c
BONUS += ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJECTS = $(BONUS:.c=.o)


all: ${NAME}


$(NAME): ${OBJECTS}
	${ARCHIVE} ${NAME} ${OBJECTS}
	${MSG1}


bonus: ${BONUS_OBJECTS}
	${ARCHIVE} ${NAME} ${BONUS_OBJECTS}
	${MSG1}


clean:
	${RM} ${OBJECTS} ${BONUS_OBJECTS}
	${MSG2}


fclean: clean
	${RM} ${NAME}


re: fclean all


.PHONY: all clean fclean re
