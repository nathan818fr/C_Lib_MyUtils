/*
** my_databuf.c for myutils in /repo/Epitech/C_Lib_MyUtils/src/my_databuf
** 
** Made by Nathan Poirier
** Login   <poirie_n@epitech.net>
** 
** Started on  Tue May 19 18:50:34 2015 Nathan Poirier
** Last update Tue May 19 23:50:41 2015 Nathan Poirier
*/

#include "myutils.h"
#include "myutils_databuf.h"

void	my_databuf_init(t_databuf *db, int blocksize)
{
  if (db)
    {
      my_memset(db, 0, sizeof(t_databuf));
      db->blocksize = blocksize;
    }
}

void	my_databuf_free(t_databuf *db)
{
  if (db)
    {
      free(db->buf);
    }
}
