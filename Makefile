# E89 Pedagogical & Technical Lab
# project:     Unitaire
# created on:  2023-01-30 - 11:04 +0100
# 1st author:  sokaneil.sieng - sokaneil.sieng
# description: Makefile

NAME	=	libstu.a

		src/putchar.c		\
SRCS	=	src/puts.c 		\
		src/print_base10.c	\
		src/nb_len.c		\
		src/get_digit.c		\
		src/atoi.c 		\
		src/strlen.c		\
		src/strcmp.c		\
		src/strcpy.c		\
		src/strncpy.c 		\
		src/strdup.c 		\
		src/strndup.c 		\
		src/strcat.c 		\
		src/strchr.c 		\
		src/is_alpha.c 		\
		src/is_num.c		\
		src/swap_int.c

OBJS	=	$(SRCS:.c=.o)

NAME_TEST	=	test.out


SRCS_TEST	=	test/puts.c 		\
			test/putchar.c		\
			test/print_base10.c	\
			test/nb_len.c		\
			test/get_digit.c	\
			test/atoi.c 		\
			test/strlen.c		\
			test/strcmp.c		\
			test/strcpy.c		\
			test/strncpy.c 		\
			test/strdup.c 		\
			test/strndup.c 		\
			test/strcat.c 		\
			test/strchr.c 		\
			test/is_alpha.c 	\
			test/is_num.c		\
			test/swap_int.c

OBJS_TEST	=	$(SRCS:.c=.o)


CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	 $(NAME) $(OBJS)

$(NAME_TEST): $(OBJS) $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS) $(OBJS_TEST) -lcriterion

test:
	$(CC) $(CFLAGS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
