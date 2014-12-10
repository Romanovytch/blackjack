/*
** blackjack.h for blackjack in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Mon Sep 29 11:45:23 2014 Florian Givernaud
** Last update Sun Oct 12 15:54:31 2014 Florian Givernaud
*/

#ifndef BLACKJACK_H_
# define BLACKJACK_H_

#define BUFF_SIZE (1024)
#define CARTE (0)
#define RESTE (1)
#define SAUTE (2)
#define ASSUR (3)
#define ABAND (4)

typedef enum	e_color
  {
    heart,
    spade,
    diamond,
    club
  }		e_color;


typedef struct	s_card
{
  int		_number;
  char		*_name;
  e_color	_color;
}		t_card;

typedef struct	t_deck
{
  t_card	*_card;
  struct t_deck	*_next;
}		t_deck;

t_card		*create_card(int, char *, e_color);
void		pop_deck_front(t_deck **);
void		pop_deck_back(t_deck **);
void		pop_deck_index(t_deck **, int);
void		push_deck_front(t_card *, t_deck **);
void		push_deck_back(t_card *, t_deck **);
t_deck		*create_deck();
void		delete_card(t_card *);
t_card		*take_card(t_deck *, int);
t_card		*deal_a_card(t_deck **);
int		make_score(t_deck *);
char		*get_next_line(const int);
int		make_bet();
t_deck		*game_tour(t_deck *, t_deck *, t_deck *);
t_deck		*game_first_tour(t_deck *, t_deck *, int);
double		winner(t_deck *, t_deck *, int, int);

#endif /* !BLACKJACK_H_ */
