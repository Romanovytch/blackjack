/*
** get_next_line.c for get_next_line in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Fri Oct  3 16:10:39 2014 Florian Givernaud
** Last update Tue Oct  7 11:57:09 2014 Florian Givernaud
*/

#include <unistd.h>
#include <stdlib.h>
#include "blackjack.h"

char		*my_add_cpy(char *dest, char *before, char *src)
{
  int		i;
  int		idx;

  i = 0;
  idx = 0;
  if (before != NULL)
    while (before[i] != '\0' && before[i] != '\n')
      {
	dest[i] = before[i];
	++i;
      }
  while (src[idx] != '\0' && src[idx] != '\n')
    {
      dest[i] = src[idx];
      ++i;
      ++idx;
    }
  dest[i] = '\0';
  return (dest);
}

char		*my_add_line(char *dest, char *src)
{
  char		*s;
  int		len;
  int		pos;

  len = 0;
  if (dest != NULL)
    while (dest[len] != '\0' && dest[len] != '\n')
      ++len;
  pos = 0;
  while (src[pos] != '\0' && src[pos] != '\n')
    ++pos;
  if ((s = malloc(sizeof(char) * (len + pos + 1))) != NULL)
    s = my_add_cpy(s, dest, src);
  if (dest != NULL)
    free(dest);
  return (s);
}

char		*get_next_line(const int fd)
{
  static char	buff[BUFF_SIZE + 1];
  static int	i;
  char		*s;

  s = NULL;
  if (i && buff[i] != '\0')
    {
      s = my_add_line(s, buff + i);
      while (buff[i] != '\0')
	if (buff[i++] == '\n')
	  return (s);
    }
  while ((i = read(fd, buff, BUFF_SIZE)) > 0)
    {
      buff[i] = '\0';
      s = my_add_line(s, buff);
      i = 0;
      while (buff[i] != '\0')
	if (buff[i++] == '\n')
	  return (s);
    }
  i = 0;
  return (s);
}
