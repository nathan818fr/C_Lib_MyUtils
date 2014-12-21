/*
** my_list.c for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils/src/my_list
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Sun Dec 21 15:58:15 2014 Nathan Poirier
** Last update Sun Dec 21 16:14:29 2014 Nathan Poirier
*/

#include "myutils_list.h"
#include "myutils.h"

t_my_list	*list_create()
{
  t_my_list	*list;

  if ((list = malloc(sizeof(t_my_list))) == NULL)
    return (NULL);
  list->size = 0;
  list->first = NULL;
  list->last = NULL;
  return (list);
}

void		list_free(t_my_list *list)
{
  t_my_listitem	*item;
  t_my_listitem	*tmp;

  if (list)
    {
      item = list->first;
      while (item)
	{
	  tmp = item;
	  item = item->next;
	  free(tmp->data);
	  free(tmp);
	}
      free(list);
    }
}
