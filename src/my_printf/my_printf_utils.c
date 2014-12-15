/*
** my_printf_utils.c for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Mon Dec 15 14:22:58 2014 Nathan Poirier
** Last update Mon Dec 15 14:25:56 2014 Nathan Poirier
*/

int	_my_printf_putchar(t_my_printf *pf, char c)
{
  if (pf->fd == -1)
    pf->str[pf->printed] = c;
  else
    write(pf->fd, &c, 1);
  return (1);
}
