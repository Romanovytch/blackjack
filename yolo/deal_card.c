/*
** deal_card.c for deal_card in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Mon Sep 29 12:54:49 2014 Florian Givernaud
** Last update Mon Sep 29 16:44:47 2014 Florian Givernaud
*/

#include <stdlib.h>
#include <time.h>
#include "blackjack.h"

t_card		*take_card(t_deck *bank, int nb)
{
  int		i;
  t_card	*card;

  i = 0;
  while (i < nb)
    {
      bank = bank->_next;
      ++i;
    }
  card = bank->_card;
  return (card);
}

int	my_deck_len(t_deck *deck)
{
  int	i;

  i = 0;
  while (deck != NULL)
    {
      deck = deck->_next;
      ++i;
    }
  return (i);
}

t_card		*deal_a_card(t_deck **bank)
{
  t_card	*card;
  int		rand_nb;
  int		len;

  len = my_deck_len(*bank);
  srand(time(NULL));
  rand_nb = rand() % len;
  card = take_card(*bank, rand_nb);
  if (rand_nb == 0)
    pop_deck_front(bank);
  else if (rand_nb == len)
    pop_deck_back(bank);
  else
    pop_deck_index(bank, rand_nb);
  return (card);
}
