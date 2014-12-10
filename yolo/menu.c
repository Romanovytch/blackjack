/*
** menu.c for menu* in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Fri Oct  3 15:44:41 2014 Florian Givernaud
** Last update Sun Oct 12 12:00:53 2014 Florian Givernaud
*/

#include <stdlib.h>
#include "blackjack.h"

void	magic_header()
{
  system("clear"); //TO DELETE
  my_putstr("=================== MAGIC 21 ===================\n");
  my_putstr("=============== Jeu de BlackJack ===============\n");
  my_putstr("================================================\n");
  my_putstr("=============== Mise minimale : 2 ==============\n");
  my_putstr("=============== Mise maximale : 100 ============\n");
  my_putstr("================================================\n\n");
}

void	my_aff_regles()
{
  my_putstr("\nLe but est de battre le croupier sans depasser 21.");
  my_putstr("Dès que le joueur fait plus de 21, il saute et perd");
  my_putstr(" sa mise initiale. La valeur des cartes est etablie");
  my_putstr(" comme suit :\n");
  my_putstr("- De 2 a 10 -> Valeur nominale de la carte.\n");
  my_putstr("- De Valet a Roi -> C'est une buche qui vaut 10.\n");
  my_putstr("- As -> Vaut 1 ou 11 au choix.\n");
  my_putchar('\n');
}

void	change_language()
{
}

int	replay()
{
  char	*str;

  my_putstr("\nVoulez-vous continuer a jouer ? (o/n)\n");
  while (42)
    {
      my_putchar('>');
      str = get_next_line(0);
      if (my_strcmp(str, "o") == 0)
	return (0);
      else if (my_strcmp(str, "n") == 0)
	return (1);
      else
	my_putstr("Mauvaise entree.\n");
    }
}

void	menu()
{
  char		*str;
  int		rep;
  double	argent;

  rep = 0;
  argent = 1000;
  magic_header();
  my_putstr("Bienvenue dans le MAGIC 21.\n\n");
  my_putstr("Entrez :\n");
  my_putstr("\"jouer\" pour commencer a jouer.\n");
  my_putstr("\"regles\" pour lire les regles du jeu.\n");
  my_putstr("\"langue\" pour changer la langue du jeu\n");
  my_putstr("\"quitter\" pour quitter le jeu\n\n");
  while (42)
    {
      my_putchar('>');
      str = get_next_line(0);
      if (my_strcmp(str, "jouer") == 0)
	while (rep == 0)
	  {
	    argent = the_game(argent);
	    rep = replay();
	  }
      else if (my_strcmp(str, "regles") == 0)
	my_aff_regles();
      else if (my_strcmp(str, "langue") == 0)
	change_language();
      else if (my_strcmp(str, "quitter") == 0)
	return ;
      else
	my_putstr("Mauvaise entree.\n");
    }
}
