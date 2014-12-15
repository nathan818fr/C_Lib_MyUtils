/*
** myutils_printf.h for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils/include
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Sun Dec 14 15:58:24 2014 Nathan Poirier
** Last update Mon Dec 15 14:24:28 2014 Nathan Poirier
*/

#ifndef MYUTILS_PRINTF_H_
# define MYUTILS_PRINTF_H_

# include <stdarg.h>
# include <stdlib.h>

# define MYUTILS_PRINTF_FLAGS 3

typedef int	(*t_printf_func)(void *pf, va_list ap);

typedef	struct	s_my_printf
{
  char		*tab_flag;
  t_printf_func	*tab_func;
  int		fd;
  char		*str;
  int		printed;
}		t_my_printf;

int	_my_printf(int fd, char *str, const char *format, va_list ap);
void	_my_printf_exec(t_my_printf *pf, const char *format,
			va_list ap, int i);

int	_my_printf_putchar(t_my_printf *pf, char c);

int     _my_printf_flag_perc(t_my_printf *arg, va_list ap);
int     _my_printf_flag_c(t_my_printf *arg, va_list ap);
int     _my_printf_flag_s(t_my_printf *arg, va_list ap);

#endif /* !MYUTILS_PRINTF_H_ */
