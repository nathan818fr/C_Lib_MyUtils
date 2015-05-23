/*
** myutils.h for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 13:15:10 2014 Nathan Poirier
** Last update Sat May 23 12:01:53 2015 Nathan Poirier
*/

#ifndef MYUTILS_H_
# define MYUTILS_H_

# include <stdlib.h>
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
** MIN / MAX macros
*/
# define MY_MIN(a, b) (((a) < (b)) ? (a) : (b))
# define MY_MAX(a, b) (((a) > (b)) ? (a) : (b))

/*
** ABS macro
*/
# define MY_ABS(a) (((a) >= 0) ? (a) : (-(a)))

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
int	my_str_startswith(char *str, char *end);
int	my_str_endswith(char *str, char *start);

/*
** my_atoi.c
*/
int	my_atoi(char *str);
long	my_atol(char *str);

/*
** my_strjoin.c
*/
# define MY_NARGS_SEQ(_1, _2, _3, _4, _5, _6, _7, _8, _9, N, ...) N
# define MY_NARGS(...) MY_NARGS_SEQ(__VA_ARGS__, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
# define my_strjoin(...) my_strnjoin(MY_NARGS(__VA_ARGS__), __VA_ARGS__)
char	*my_strnjoin(int n, ...);

/*
** my_strerror.c
*/
char	*my_strerror(int errnum);

/*
** my_strcpy.c
*/
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strdup(char *str);
char	*my_strndup(char *str, int n);

/*
** my_getenv.c
*/
char	*my_getenv(char **env, char *name);

/*
** my_memset.c
*/
void	*my_memset(void *str, int c, size_t size);
void	*my_memcpy(void *dest, const void *src, size_t size);

/*
** my_getnbr.c
*/
int	my_getnbr(int *nb, char *str);
int	my_getnbr_base(int *nb, char *str, char *base, int baselen);

#endif /* !MYUTILS_H_ */
