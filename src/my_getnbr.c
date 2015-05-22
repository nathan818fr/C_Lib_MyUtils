/*
** my_getnbr.c for myutils in /repo/Epitech/C_Lib_MyUtils
** 
** Made by Nathan Poirier
** Login   <poirie_n@epitech.net>
** 
** Started on  Fri May 22 21:50:47 2015 Nathan Poirier
** Last update Fri May 22 22:39:48 2015 Nathan Poirier
*/

#include "myutils.h"

int	_my_getnbr_base_val(char c, char *base)
{
  int	i;

  i = 0;
  while (base[i])
    {
      if (base[i] == c)
	return (i);
      i++;
    }
  return (-1);
}

int	_my_getnbr_base_calc(int *nb, int *prevnb, int pow, int curval)
{
  if (curval == -1)
    return (-1);
  *nb -= curval * pow;
  if (*prevnb < *nb)
    return (-1);
  *prevnb = *nb;
  return (0);
}

int	my_getnbr_base(int *nb, char *str, char *base, int baselen)
{
  int	i;
  int	prevnb;
  int	pow;

  if (str == NULL || (i = my_strlen(str)) == 0)
    return (-1);
  prevnb = 0;
  pow = 1;
  while (i > 0)
    {
      i--;
      if (_my_getnbr_base_calc(nb, &prevnb, pow,
			       _my_getnbr_base_val(str[i], base)) == -1)
	return (-1);
      pow *= baselen;
      if (i - 1 == 0 && str[0] == '-')
	return (0);
    }
  if (*nb == -2147483648)
    return (-1);
  *nb = -*nb;
  return (0);
}

int	my_getnbr(int *nb, char *str)
{
  return (my_getnbr_base(nb, str, "0123456789", 10));
}
