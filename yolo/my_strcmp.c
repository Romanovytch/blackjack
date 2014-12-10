/*
** my_strcmp.c for my_strcmp in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Wed Oct  1 09:49:44 2014 Florian Givernaud
** Last update Tue Oct  7 12:12:20 2014 Florian Givernaud
*/

#include <stdlib.h>

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  if (s1 == NULL)
    return (1);
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] > s2[i])
        return (1);
      else if (s1[i] < s2[i])
        return (-1);
      ++i;
    }
  if (my_strlen(s1) > my_strlen(s2))
    return (1);
  if (my_strlen(s1) < my_strlen(s2))
    return (-1);
  return (0);
}
