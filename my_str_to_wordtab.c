/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Wed Oct 25 03:06:06 2017 NGO tri
** Last update Thu Oct 26 05:13:01 2017 NGO tri
*/
#include <stdlib.h>
char	*my_strdup(char *str);

int	anum(char c)
{
  if (('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||('0' <= c && c <= '9'))
    return (1);
  else
    return (0);
}

int	wordnb(char *str)
{
  int i;
  int nb;
  
  i = 0;
  nb = 0;
  if (anum(str[0]) == 1)
    nb = 1;
  while (str[i])
    {
      if (anum(str[i]) == 0 && anum(str[i + 1]) == 1)
	{
	nb++;
	}
      i++;
    }
  return (nb);
}

int	wordlen(char *str, int i)
{
  int j;
  
  j = 0;
  while (anum(str[i]) == 1)
    {
      i++;
      j++;
    }
  return (j);
}

void	put_in(char **tab, char *str)
{
  int i;
  int j;
  int len;
  
  i = 0;
  j = 0;
  while (str[i])
    {
      if (anum(str[i]) == 1)
	{
	  len = wordlen(str, i);
	  tab[j] = malloc (len + 1);
	  tab[j] = my_strdup(str + i);
	  tab[j][len] = '\0';
	  j++;
	  i = i + len;
	}
      i++;
    }
}

char	**my_str_to_wordtab(char *str)
{
  char **tab;
  
  tab = malloc((wordnb(str) + 1) * 4);
  put_in(tab, str);
  tab[wordnb(str)] = '\0'; 
  return(tab);
}
