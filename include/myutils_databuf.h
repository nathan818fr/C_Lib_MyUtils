/*
** myutils_databuf.h for myutils in /repo/Epitech/C_Lib_MyUtils
** 
** Made by Nathan Poirier
** Login   <poirie_n@epitech.net>
** 
** Started on  Tue May 19 18:56:20 2015 Nathan Poirier
** Last update Thu May 21 12:57:15 2015 Nathan Poirier
*/

#ifndef MYUTILS_DATABUF_H_
# define MYUTILS_DATABUF_H_

typedef struct s_databuf
{
  char		append_zero;
  int		blocksize;
  int		len;
  int		size;
  char		*buf;
}		t_databuf;

/*
** my_databuf.c
*/
void		my_databuf_init(t_databuf *db, int blocksize);
void		my_databuf_free(t_databuf *db);

/*
** my_databuf_append.c
*/
int		my_databuf_append(t_databuf *db, char *buf, int len);
int		my_databuf_insert(t_databuf *db, char *buf, int len, int at);

/*
** my_databuf_alloc.c
*/
int		my_databuf_alloc(t_databuf *db, int len);
int		my_databuf_freeunused(t_databuf *db);
int		my_databuf_setsize(t_databuf *db, int nsize);

/*
** my_databuf_remove.c
*/
int		my_databuf_trim_start(t_databuf *db, int len);
int		my_databuf_trim_end(t_databuf *db, int len);
int		my_databuf_trim(t_databuf *db, int from, int to);

#endif  /* !MYUTILS_DATABUF_H_ */
