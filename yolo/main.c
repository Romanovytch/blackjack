/*
** main.c for main in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Mon Sep 29 11:44:35 2014 Florian Givernaud
** Last update Sun Oct 12 12:02:27 2014 Florian Givernaud
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "blackjack.h"

void	my_aff_card(t_card *card)
{
  my_putstr(card->_name);
  my_putstr(" de ");
  if (card->_color == heart)
    my_putstr("coeur\n");
  if (card->_color == spade)
    my_putstr("pique\n");
  if (card->_color == diamond)
    my_putstr("carreau\n");
  if (card->_color == club)
    my_putstr("trefle\n");
}

void	my_aff_deck(t_deck *deck)
{
  int	i;

  i = 1;
  if (deck == NULL)
    my_putstr("The deck is empty.\n");
  while (deck != NULL)
    {
      my_put_nbr(i);
      my_putchar('.');
      my_aff_card(deck->_card);
      deck = deck->_next;
      ++i;
    }
}

void	game_header(t_deck *player, t_deck *croupier, double argent, int mise)
{
  magic_header();
  my_putstr("Argent disponible : ");
  printf("%.2f euros\n", argent);
  my_putstr("Mise actuelle : ");
  my_put_nbr(mise);
  my_putstr(" euros\n\n");
  my_putstr("Joueur :\n");
  my_aff_deck(player);
  my_putstr("\n\nCroupier :\n");
  my_aff_deck(croupier);
}
int	main()
{
  menu();
  return (0);
}
