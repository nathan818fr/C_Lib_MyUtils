/*
** myutils_list.h for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils/include
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Sun Dec 21 15:58:46 2014 Nathan Poirier
** Last update Sun Dec 21 16:09:59 2014 Nathan Poirier
*/

#ifndef MYUTILS_LIST_H_
# define MYUTILS_LIST_H_

typedef struct		s_my_listitem
{
  void			*data;
  struct s_my_listitem	*prev;
  struct s_my_listitem	*next;
}			t_my_listitem;

typedef struct		s_my_list
{
  int			size;
  t_my_listitem		*first;
  t_my_listitem		*last;
}			t_my_list;

#endif /* !MYUTILS_LIST_H_ */
