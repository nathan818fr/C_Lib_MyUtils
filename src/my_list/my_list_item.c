/*
** my_list_item.c for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils/src/my_list
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Sun Dec 21 16:28:50 2014 Nathan Poirier
** Last update Sun Dec 21 17:32:08 2014 Nathan Poirier
*/

#include "myutils_list.h"
#include "myutils.h"

t_my_listitem	*_my_listitem_create(void *data)
{
  t_my_listitem *item;

  if ((item = malloc(sizeof(t_my_listitem))) == NULL)
    return (NULL);
  item->data = data;
  item->list = NULL;
  item->prev = NULL;
  item->next = NULL;
  return (item);
}

void		_my_listitem_insert_at(t_my_list *list, t_my_listitem *item, t_my_listitem *pos)
{
  item->list = list;
  if (pos == NULL)
    {
      item->prev = list->last;
      list->last = item;
      if (list->first == NULL)
	list->first = item;
    }
  else
    {
      item->next = pos;
      pos->prev = item;
      if (pos == list->first)
	list->first = item;
    }
  list->size++;
}

t_my_listitem	*my_list_add(t_my_list *list, void *data)
{
  return (my_list_insert(list, data, -1));
}

t_my_listitem	*my_list_insert(t_my_list *list, void *data, int pos)
{
  t_my_listitem	*item;

  if ((item = _my_listitem_create(data)) == NULL)
    return (NULL);
  if (list)
    {
      if (pos < -list->size)
	pos = 0;
      else if (pos >= list->size)
	pos = list->size - 1;
      else if (pos < 0)
	pos = list->size + pos + 1;
      if (pos == 0)
	_my_listitem_insert_at(list, item, list->first);
      else if (pos == list->size)
	_my_listitem_insert_at(list, item, NULL);
      else
	{
	  _my_listitem_insert_at(list, item, my_list_get(list, pos));
	}
    }
  return (item);
}

t_my_listitem	*my_list_get(t_my_list *list, int pos)
{
  t_my_listitem	*item;
  int		i;

  if (pos < 0 || pos >= list->size)
    return (NULL);
  i = 0;
  item = list->first;
  while (item != NULL && i < pos)
    {
      item = item->next;
      i++;
    }
  return (item);
}

void		my_list_remove(t_my_listitem *item)
{
  if (item->list)
    {
      if (item->list->first == item)
	item->list->first = item->next;
      if (item->list->last == item)
	item->list->last = item->prev;
      item->list->size--;
    }
  if (item->prev)
    item->prev->next = item->next;
  if (item->next)
    item->next->prev = item->prev;
  free(item->data);
  free(item);
}
