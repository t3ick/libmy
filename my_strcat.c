/*
** my_strcat.c for my_strcat in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 04:31:34 2017 NGO tri
** Last update Tue Oct 24 05:30:32 2017 NGO tri
*/

int     my_strlen(char *str);

char  *my_strcat(char *dest, char *src)
{
  int i;
  int c;
  
  c = my_strlen(dest);
  i = 0;
  while (src[i])
    {
      dest[i +c] = src[i];
      i++;
    }
  return (dest);
}
