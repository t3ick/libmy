/*
** my_strdup.c for my_strdup in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 08:12:46 2017 NGO tri
** Last update Tue Oct 24 08:38:30 2017 NGO tri
*/

#include <stdlib.h>

int     my_strlen(char *str);

char *my_strdup(char *str)
{
  int i;
  int size;
  char *copy;
  
  i = 0;
  size = my_strlen(str);
  copy = malloc (size + 1);
  while (str[i])
    {
      copy[i] = str[i];
      i++;
    }
  copy[i] = '\0';
  return (copy);
}
