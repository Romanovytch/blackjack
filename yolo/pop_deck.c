/*
** pop_deck.c for pop_deck in /home/givern_f/P2/P2J5/ex_02
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Tue Sep 23 10:23:33 2014 Florian Givernaud
** Last update Mon Sep 29 16:51:26 2014 Florian Givernaud
*/

#include <stdlib.h>
#include "blackjack.h"

void		pop_deck_front(t_deck **deck)
{
  t_deck	*elem;

  if (*deck != NULL)
    {
      //delete_card((*deck)->_card);
      elem = (*deck)->_next;
      //free(*deck);
      *deck = elem;
    }
}

void		pop_deck_back(t_deck **deck)
{
  t_deck	*tmp;
  t_deck	*ptmp;

  tmp = *deck;
  ptmp = *deck;
  if (*deck == NULL)
    return ;
  if ((*deck)->_next == NULL)
    {
      //delete_card((*deck)->_card);
      //free(*deck);
      *deck = NULL;
      return ;
    }
  while (tmp->_next != NULL)
    {
      ptmp = tmp;
      tmp = tmp->_next;
    }
  ptmp->_next = NULL;
  //delete_card(tmp->_card);
  //free(tmp);
}

void		pop_deck_index(t_deck **deck, int nb)
{
  t_deck        *tmp;
  t_deck        *ptmp;
  int		i;

  i = 0;
  tmp = *deck;
  ptmp = *deck;
  if (*deck == NULL)
    return ;
  if ((*deck)->_next == NULL)
    {
      //delete_card((*deck)->_card);
      //free(*deck);
      *deck = NULL;
      return ;
    }
  while (i < nb)
    {
      ptmp = tmp;
      tmp = tmp->_next;
      ++i;
    }
  ptmp->_next = tmp->_next;
  //delete_card(tmp->_card);
  //free(tmp);
}
