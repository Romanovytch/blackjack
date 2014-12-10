/*
** score.c for score in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Mon Sep 29 14:19:15 2014 Florian Givernaud
** Last update Sun Oct 12 15:53:26 2014 Florian Givernaud
*/

#include <stdlib.h>
#include "blackjack.h"

int	make_score(t_deck *deck)
{
  int	score;

  score = 0;
  while (deck != NULL)
    {
      if (deck->_card->_number <= 10)
	score = score + deck->_card->_number;
      else if (deck->_card->_number <= 13)
	score = score + 10;
      else if (deck->_card->_number == 14)
	{
	  if (score + 11 <= 21)
	    score = score + 11;
	  else
	    score = score + 1;
	}
      deck = deck->_next;
    }
  return (score);
}

int	check_score(t_deck *deck)
{
  int	score_player;

  score_player = make_score(deck);
  if (score_player > 21)
    {
      my_putstr("\nLe joueur saute.\n");
      return (SAUTE);
    }
  return (CARTE);
}

double		winner(t_deck *player, t_deck *croupier, int mise, int assur)
{
  int		score_player;
  int		score_croupier;
  double	money;

  score_player = make_score(player);
  score_croupier = make_score(croupier);
  if (assur == 4)
    return (((double)mise / 2) * -1);
  if ((score_croupier > 21 && score_player <= 21) ||
      (score_player <= 21 && score_croupier < score_player))
    {
      my_putstr("Le joueur gagne.\n");
      money = (double)mise;
    }
  else if ((score_player > 21 && score_croupier <= 21) ||
	   (score_croupier <= 21 && score_player < score_croupier))
    {
      my_putstr("Le croupier gagne.\n");
      if (assur == 3)
	money = (double)mise + (double)mise / 2;
      else
	money = mise;
      money = money * -1;
    }
  else if (score_croupier <= 21 && score_player <= 21 && score_croupier == score_player)
    my_putstr("Egalite\n");
  return (money);
}
