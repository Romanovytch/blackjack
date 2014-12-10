/*
** push_deck.c for push_deck in /home/givern_f/P2/P2J5/ex_02
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Tue Sep 23 09:47:00 2014 Florian Givernaud
** Last update Wed Oct  1 16:46:46 2014 Florian Givernaud
*/

#include <stdlib.h>
#include "blackjack.h"

void		push_deck_front(t_card *card, t_deck **deck)
{
  t_deck	*elem;

  elem = malloc(sizeof(t_deck));
  elem->_card = card;
  elem->_next = *deck;
  *deck = elem;
}

void		push_deck_back(t_card *card, t_deck **deck)
{
  t_deck	*elem;
  t_deck	*tmp;

  tmp = *deck;
  elem = malloc(sizeof(t_deck));
  elem->_card = card;
  elem->_next = NULL;
  if (*deck == NULL)
    {
      *deck = elem;
      return ;
    }
  while (tmp->_next != NULL)
    tmp = tmp->_next;
  tmp->_next = elem;
}
