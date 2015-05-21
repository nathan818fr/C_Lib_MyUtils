/*
** my_databuf_append.c for myutils in /repo/Epitech/C_Lib_MyUtils/src/my_databuf
** 
** Made by Nathan Poirier
** Login   <poirie_n@epitech.net>
** 
** Started on  Tue May 19 19:01:14 2015 Nathan Poirier
** Last update Thu May 21 12:56:08 2015 Nathan Poirier
*/

#include "myutils.h"
#include "myutils_databuf.h"

int		my_databuf_append(t_databuf *db, char *buf, int len)
{
  int		i;

  if (buf == NULL || len <= 0)
    return (0);
  if (db->len + len >= db->size)
    {
      if (my_databuf_alloc(db, len) == -1)
	return (-1);
    }
  i = 0;
  while (i < len)
    {
      db->buf[db->len] = buf[i];
      db->len++;
      i++;
    }
  if (db->append_zero)
    db->buf[db->len] = 0;
  return (0);
}

int		my_databuf_insert(t_databuf *db, char *buf, int len, int at)
{
  int		i;

  if (buf == NULL || len <= 0 || at > db->len)
    return (0);
  if (db->len + len >= db->size)
    {
      if (my_databuf_alloc(db, len) == -1)
	return (-1);
    }
  i = 0;
  while (i < len)
    {
      if (at + i < db->len)
	db->buf[at + len + i] = db->buf[at + i];
      db->buf[at + i] = buf[i];
      i++;
    }
  db->len += len;
  if (db->append_zero)
    db->buf[db->len] = 0;
  return (0);
}
