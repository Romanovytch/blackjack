##
## Makefile for Makefile in /home/givern_f/Modules/Prog-Elem-C/blackjack
## 
## Made by Florian Givernaud
## Login   <givern_f@epitech.net>
## 
## Started on  Mon Sep 29 11:42:18 2014 Florian Givernaud
## Last update Sun Oct 12 16:31:32 2014 Florian Givernaud
##

NAME	=	blackjack

SRC	=	main.c \
		game.c \
		create_card.c \
		push_deck.c \
		pop_deck.c \
		create_deck.c \
		delete_card.c \
		my_putstr.c \
		deal_card.c \
		score.c \
		bet.c \
		get_next_line.c \
		my_put_nbr.c \
		my_strcmp.c \
		menu.c \
		player_choice.c

OBJ	=	$(SRC:.c=.o)

all	:
		cc -c $(SRC)
		cc -o $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	: clean
		rm -f $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
