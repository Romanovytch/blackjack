/*
** my_putstr.c for my_putstr in /home/givern_f/Modules/Prog-Elem-C/blackjack
** 
** Made by Florian Givernaud
** Login   <givern_f@epitech.net>
** 
** Started on  Mon Sep 29 12:31:33 2014 Florian Givernaud
** Last update Mon Sep 29 12:32:18 2014 Florian Givernaud
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
}
