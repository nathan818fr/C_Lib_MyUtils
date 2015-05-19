/*
** my_databuf_remove.c for myutils in /repo/Epitech/C_Lib_MyUtils
** 
** Made by Nathan Poirier
** Login   <poirie_n@epitech.net>
** 
** Started on  Tue May 19 21:32:50 2015 Nathan Poirier
** Last update Tue May 19 22:11:36 2015 Nathan Poirier
*/

#include "myutils.h"
#include "myutils_databuf.h"

int		my_databuf_trim_start(t_databuf *db, int len)
{
  return (my_databuf_trim(db, 0, len));
}

int		my_databuf_trim_end(t_databuf *db, int len)
{
  return (my_databuf_trim(db, MY_MAX(0, db->len - len), db->len));
}

int		my_databuf_trim(t_databuf *db, int from, int to)
{
  int		i;

  if (from >= db->len)
    return (0);
  i = 0;
  while (to + i < db->len)
    {
      db->buf[from + i] = db->buf[to + i];
      i++;
    }
  if (db->append_zero)
    db->buf[from + i] = 0;
  db->len = from + i;
  return (0);
}
