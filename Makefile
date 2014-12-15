##
## Makefile for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils
## 
## Made by Nathan Poirier
## Login   <poirie-n@epitech.net>
## 
## Started on  Wed Dec 10 13:08:35 2014 Nathan Poirier
## Last update Mon Dec 15 16:11:20 2014 Nathan Poirier
##

NAME	= libmyutils.a

SRCS	= my_putchar.c			\
	  my_putstr.c			\
	  my_strlen.c			\
	  my_strcmp.c			\
	  my_atoi.c			\
	  my_strjoin.c			\
	  my_strerror.c			\
	  my_printf/my_printf.c		\
	  my_printf/my_printf2.c	\
	  my_printf/my_printf_flags1.c	\
	  my_printf/my_printf_utils.c	\
	  my_printf/my_printf_fct.c	\
	  my_printf/my_printf_vfct.c	\
	  my_log/my_log.c

OBJS	= $(addprefix src/, $(SRCS:.c=.o))

CC	= gcc

CFLAGS	+= -O3
CFLAGS	+= -W -Wall -Wextra -Werror -Wno-unused-parameter
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -Iinclude/

LDFLAGS	=

RM	= rm -f

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

all:		$(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
