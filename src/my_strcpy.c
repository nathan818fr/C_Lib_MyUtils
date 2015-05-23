/*
** my_strcpy.c for myutils in /home/poirie-n/blinux/poirie_n/repo/MyProjects/C_Lib_MyUtils/src
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Mon Jan  5 17:48:37 2015 Nathan Poirier
** Last update Sat May 23 12:01:15 2015 Nathan Poirier
*/

#include "myutils.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strndup(char *str, int n)
{
  char	*nstr;

  if ((nstr = malloc(n + 1)) == NULL)
    return (NULL);
  my_strncpy(nstr, str, n);
  return (nstr);
}

char	*my_strdup(char *str)
{
  char	*nstr;

  if ((nstr = malloc(my_strlen(str) + 1)) == NULL)
    return (NULL);
  my_strcpy(nstr, str);
  return (nstr);
}
