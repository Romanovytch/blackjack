/*
** create_card.c for create_card in /home/givern_f/P2/P2J5/ex_01
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Tue Sep 23 09:24:08 2014 Florian Givernaud
** Last update Mon Sep 29 12:22:12 2014 Florian Givernaud
*/

#include <stdlib.h>
#include "blackjack.h"

t_card		*create_card(int nbr, char *name, e_color clr)
{
  t_card	*elem;

  elem = malloc(sizeof(t_card));
  elem->_number = nbr;
  elem->_name = name;
  elem->_color = clr;
  return (elem);
}
