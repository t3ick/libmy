/*
** my_strncat.c for my_strncat in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 05:33:30 2017 NGO tri
** Last update Tue Oct 24 05:37:00 2017 NGO tri
*/

int     my_strlen(char *str);

char  *my_strncat(char *dest, char *src, int n)
{
  int i;
  int c;

  c = my_strlen(dest);
  i = 0;
  while (src[i] && i < n)
    {
      dest[i +c] = src[i];
      i++;
    }
  return (dest);
}
