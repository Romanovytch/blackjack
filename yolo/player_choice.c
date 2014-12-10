/*
** player_choice.c for player_choice in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Sun Oct 12 16:02:00 2014 Florian Givernaud
** Last update Sun Oct 12 18:57:06 2014 Florian Givernaud
*/

#include "blackjack.h"

int		carte_choice(t_deck *bank, t_deck *player)
{
  t_card	*card;

  card = deal_a_card(&bank);
  push_deck_back(card, &player);
  return (check_score(player));
}

int	assur_choice(t_deck *croupier)
{
  if (check_assurance(croupier) == 1)
    return (ASSUR);
  else
    my_putstr("Impossible. Le jeu du croupier doit être un As.\n");
}

int	doubl_choice(t_deck *bank, t_deck *player, int *mise)
{
  t_card	*card;

  *mise = *mise * 2;
  card = deal_a_card(&bank);
  push_deck_back(card, &player);
  return (RESTE);
}
