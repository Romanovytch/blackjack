/*
** create_deck.c for create_deck in /home/givern_f/P2/P2J5/ex_03
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Tue Sep 23 11:44:56 2014 Florian Givernaud
** Last update Fri Oct  3 14:46:15 2014 Florian Givernaud
*/

#include <stdlib.h>
#include "blackjack.h"

t_deck	*create_color(t_deck *deck, e_color i)
{
  push_deck_back(create_card(2, "Deux", i), &deck);
  push_deck_back(create_card(3, "Trois", i), &deck);
  push_deck_back(create_card(4, "Quatre", i), &deck);
  push_deck_back(create_card(5, "Cinq", i), &deck);
  push_deck_back(create_card(6, "Six", i), &deck);
  push_deck_back(create_card(7, "Sept", i), &deck);
  push_deck_back(create_card(8, "Huit", i), &deck);
  push_deck_back(create_card(9, "Neuf", i), &deck);
  push_deck_back(create_card(10, "Dix", i), &deck);
  push_deck_back(create_card(11, "Valet", i), &deck);
  push_deck_back(create_card(12, "Reine", i), &deck);
  push_deck_back(create_card(13, "Roi", i), &deck);
  push_deck_back(create_card(14, "As", i), &deck);
  return (deck);
}

t_deck		*create_deck()
{
  t_deck	*deck;

  deck = NULL;
  deck = create_color(deck, heart);
  deck = create_color(deck, spade);
  deck = create_color(deck, diamond);
  deck = create_color(deck, club);
  return (deck);
}
