/*
** my_databuf_alloc.c for myutils in /repo/Epitech/C_Lib_MyUtils/src/my_databuf
** 
** Made by Nathan Poirier
** Login   <poirie_n@epitech.net>
** 
** Started on  Tue May 19 19:15:36 2015 Nathan Poirier
** Last update Tue May 19 22:10:35 2015 Nathan Poirier
*/

#include "myutils.h"
#include "myutils_databuf.h"

int		my_databuf_alloc(t_databuf *db, int len)
{
  int		nsize;

  nsize = (1 + ((db->len + len) / db->blocksize)) * db->blocksize;
  return (my_databuf_setsize(db, nsize));
}

int		my_databuf_freeunused(t_databuf *db)
{
  int		nsize;

  nsize = (1 + (db->len / db->blocksize)) * db->blocksize;
  if (nsize >= db->size)
    return (0);
  return (my_databuf_setsize(db, nsize));
}

int		my_databuf_setsize(t_databuf *db, int nsize)
{
  char		*nbuf;
  int		i;

  if (db->size == nsize)
    return (0);
  if ((nbuf = malloc(nsize + (db->append_zero ? 1 : 0))) == NULL)
    return (-1);
  if (db->buf)
    {
      i = 0;
      while (i < db->len && i < nsize)
	{
	  nbuf[i] = db->buf[i];
	  i++;
	}
    }
  if (db->append_zero)
    nbuf[db->len] = 0;
  free(db->buf);
  db->buf = nbuf;
  db->size = nsize;
  return (0);
}
