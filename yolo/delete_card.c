/*
** delete_card.c for delete_card in /home/givern_f/P2/P2J5/ex_01
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Tue Sep 23 09:41:23 2014 Florian Givernaud
** Last update Mon Sep 29 12:31:21 2014 Florian Givernaud
*/

#include <stdlib.h>
#include "blackjack.h"

void	delete_card(t_card *card)
{
  free(card);
}
