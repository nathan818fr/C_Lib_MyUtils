/*
** my_strcmp.c for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 14:15:06 2014 Nathan Poirier
** Last update Sat Mar 21 14:47:29 2015 Nathan Poirier
*/

#include "myutils.h"

/*
** Compare two strings.
**
** Return:
**  An integer less than, equal to, or greater than zero if s1 is found,
**  respectively, to be less than, to match, or be greater than s2.
*/
int		my_strcmp(char *s1, char *s2)
{
  size_t	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i])
    i++;
  return (s1[i] - s2[i]);
}

/*
** Compare the first n bytes of two strings.
**
** Return:
**  An integer less than, equal to, or greater than zero if the first n bytes
**  of s1 is found, respectively, to be less than, to match, or be greater
**  than s2.
*/
int		my_strncmp(char *s1, char *s2, size_t n)
{
  size_t	i;

  i = 0;
  while (i < n && s1[i] == s2[i] && s1[i])
    i++;
  if (i < n)
    return (s1[i] - s2[i]);
  return (0);
}

int		my_str_startswith(char *str, char *start)
{
  if (my_strncmp(str, start, my_strlen(start)) == 0)
    return (1);
  return (0);
}

int		my_str_endswith(char *str, char *end)
{
  int		strlen;
  int		endlen;

  strlen = my_strlen(str);
  endlen = my_strlen(end);
  if (strlen < endlen)
    return (0);
  if (my_strncmp(str + strlen - endlen, end, endlen) == 0)
    return (1);
  return (0);
}
