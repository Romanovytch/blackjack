/*
** bet.c for bet in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Mon Sep 29 17:21:47 2014 Florian Givernaud
** Last update Sun Oct 12 14:55:19 2014 Florian Givernaud
*/

#include <stdlib.h>
#include <stdio.h>
#include "blackjack.h"

int	bet(double argent)
{
  char	*str;
  int	coins;
  int	stop;

  coins = 0;
  stop = 0;
  while (stop == 0)
    {
      while (stop == 0)
	{
	  my_putstr("\nEntrez votre mise [2 - 100] : ");
	  str = get_next_line(0);
	  coins = atoi(str);
	  if (coins < 2 || coins > 100)
	    my_putstr("Mise interdite.\n");
	  else if ((argent - (double)coins) < 0)
	    my_putstr("Vous n'avez pas assez d'argent. Clochard.\n");
	  else
	    stop = 1;
	}
      my_putstr("Valider votre mise de ");
      my_put_nbr(coins);
      my_putstr(" euros ? (o/n) : ");
      str = get_next_line(0);
      if (my_strcmp(str, "o") == 0)
	stop = 1;
      else
	stop = 0;
    }
  return (coins);
}

int	check_assurance(t_deck *deck)
{
  if (deck->_next == NULL && deck->_card->_number == 14)
    return (1);
  else
    return (0);
}
