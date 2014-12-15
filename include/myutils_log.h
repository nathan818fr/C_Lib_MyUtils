/*
** myutils_log.h for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils/include
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Mon Dec 15 15:54:47 2014 Nathan Poirier
** Last update Mon Dec 15 16:02:01 2014 Nathan Poirier
*/

#ifndef MYUTILS_LOG_H_
# define MYUTILS_LOG_H_

# include <stdarg.h>

# define MY_LOG_TRACE 0
# define MY_LOG_DEBUG 1
# define MY_LOG_INFO 2
# define MY_LOG_WARN 3
# define MY_LOG_ERROR 4
# define MY_LOG_FATAL 5

typedef char	t_my_logtype;

int	_my_log_exec(t_my_logtype type, char *msg, va_list ap);

#endif /* !MYUTILS_LOG_H_ */
