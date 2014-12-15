/*
** myutils.h for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 13:15:10 2014 Nathan Poirier
** Last update Mon Dec 15 16:08:32 2014 Nathan Poirier
*/

#ifndef MYUTILS_H_
# define MYUTILS_H_

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

/*
** Options
*/
# ifndef MYUTILS_OPT_PROGRAMNAME
#  define MYUTILS_OPT_PROGRAMNAME NULL
# endif

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

/*
** my_strcmp.c
**/
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, size_t n);

/*
** my_atoi.c
*/
int	my_atoi(char *str);
long	my_atol(char *str);

/*
** my_strjoin.c
*/
char	*my_strjoin(char *s1, ...);

/*
** my_strerror.c
*/
char	*my_strerror(int errnum);

/*
** my_printf/my_printf_[v]fct.c
*/
int	my_printf(const char *format, ...);
int	my_fprintf(int fd, const char *format, ...);
int	my_sprintf(char *str, const char *format, ...);
int	my_vprintf(const char *format, va_list ap);
int	my_vfprintf(int fd, const char *format, va_list ap);
int	my_vsprintf(char *str, const char *format, va_list ap);

/*
** my_log/
*/
void	my_log(char type, char *msg, ...);

#endif /* !MYUTILS_H_ */

