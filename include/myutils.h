/*
** myutils.h for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 13:15:10 2014 Nathan Poirier
** Last update Wed Dec 10 13:52:09 2014 Nathan Poirier
*/

#ifndef MYUTILS_H_
# define MYUTILS_H_

# include <stdio.h>
# include <unistd.h>

/*
** my_putchar.c
*/
ssize_t	my_putchar_to(int fd, char c);
ssize_t	my_putchar(char c);

/*
** my_putstr.c
*/
size_t	my_putstr_to(int fd, char *str);
size_t	my_putstr(char *str);

/*
** my_strlen.c
*/
size_t	my_strlen(char *str);

#endif /* !MYUTILS_H_ */
