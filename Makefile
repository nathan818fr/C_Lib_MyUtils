##
## Makefile for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils
## 
## Made by Nathan Poirier
## Login   <poirie-n@epitech.net>
## 
## Started on  Wed Dec 10 13:08:35 2014 Nathan Poirier
## Last update Wed Dec 10 13:12:33 2014 Nathan Poirier
##

NAME	= libmyutils.a

SRCS	= 

OBJS	= $(addprefix src/, $(SRCS:.c=.o))

CC	= gcc

CFLAGS	=

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
