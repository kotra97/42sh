/*
** my_strlen.c for my_strlen in /home/rousse_i/rendu/Piscine_C_J04
**
** Made by mathis rousselot
** Login   <rousse_i@epitech.net>
**
** Started on  Thu Oct  1 23:17:07 2015 mathis rousselot
** Last update Wed Jun  8 10:52:32 2016 mathis rousselot
*/

#include <stdio.h>

int     my_strlen(char *str)
{
  int x;

  x = 0;
  if (str == NULL)
    return (x);
  while (str[x] != '\0')
    x++;
  return (x);
}
